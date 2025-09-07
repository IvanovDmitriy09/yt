/*******************************************************************************
 *                                                                              *
 *  Copyright (c), 2023, Motorcomm Electronic Technology Co.,Ltd.               *
 *  Motorcomm Confidential and Proprietary.                                     *
 *                                                                              *
 ********************************************************************************
 */
#include "gd32f10x.h"

#define INT_IF_ACCESS_FRAME_CTRL   (0xf0000)
#define INT_IF_ACCESS_ADDR_CTRL    (0xf0004)
#define INT_IF_ACCESS_DATA_0_ADDR  (0xf0008)
#define INT_IF_ACCESS_DATA_1_ADDR  (0xf000c)

#define EXT_IF_ACCESS_FRAME_CTRL   (0x6a000)
#define EXT_IF_ACCESS_ADDR_CTRL    (0x6a004)
#define EXT_IF_ACCESS_DATA_0_ADDR  (0x6a008)
#define EXT_IF_ACCESS_DATA_1_ADDR  (0x6a00c)

#define E_OP_CTRL_0   (0xE0000)
#define E_OP_CTRL_1   (0xE0004)

#define MAX_BUSYING_WAIT_TIME   (10)

#define SMI_ST_CODE   0x1
#define SMI_OP_READ   0x2
#define SMI_OP_WRITE  0x1
#define SMI_TA_CODE   0x2

/* porting the follow macro or function according to the platform */
#define GPIO_DIR_IN     0
#define GPIO_DIR_OUT    1

/* GPIO used for SMI data */
#define GPIO_MDIO       GPIO_PIN_2
/* GPIO used for SMI clock */
#define GPIO_MDC        GPIO_PIN_3
#define DELAY           10

static void smi_lock(void) {
	return;
}

static void smi_unlock(void) {
	return;
}

static inline void smi_delay(uint32_t delay) {
	/*
	 According to the protocol requirements, it is recommended that
	 the minimum value of MDC High Pulse Width is 160ns
	 the minimum value of MDC Low Pulse Width is 160ns
	 the minimum value of MDC Period is 400ns
	 */
	for (uint16_t i = 0; i < delay; i++) {
		__ASM volatile ("nop");
	}
	return;
}

static int32_t gpio_set_dir(uint32_t gpioId, uint8_t dir) {
	if (dir == GPIO_DIR_OUT) {
		gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, gpioId);
	} else {
		gpio_init(GPIOA, GPIO_MODE_IN_FLOATING, GPIO_OSPEED_50MHZ, gpioId);
	}

	return 0;
}

static int32_t gpio_write_bit(uint32_t gpioId, uint16_t data) {
	gpio_bit_write(GPIOA, gpioId, data);
	return 0;
}

static int32_t gpio_read_bit(uint32_t gpioId, uint16_t *data) {
	*data = gpio_input_bit_get(GPIOA, gpioId);
	return 0;
}
/* porting the above macro or function according to the platform */

void smi_write_bits(uint16_t data, uint32_t len) {
	gpio_set_dir(GPIO_MDC, GPIO_DIR_OUT);
	gpio_set_dir(GPIO_MDIO, GPIO_DIR_OUT);
	for (; len > 0; len--) {
		gpio_write_bit(GPIO_MDC, 0);
		smi_delay(DELAY);
		if (data & (1 << (len - 1)))
			gpio_write_bit(GPIO_MDIO, 1);
		else
			gpio_write_bit(GPIO_MDIO, 0);
		smi_delay(DELAY);

		gpio_write_bit(GPIO_MDC, 1);
		smi_delay(DELAY);
	}
	gpio_write_bit(GPIO_MDC, 0);
}

void smi_read_bits(uint32_t len, uint16_t *data) {
	uint16_t tmp = 0;

	gpio_set_dir(GPIO_MDIO, GPIO_DIR_IN);
	for (*data = 0; len > 0; len--) {
		gpio_read_bit(GPIO_MDIO, &tmp);
		*data |= ((tmp & 0x1) << (len - 1));
		smi_delay(DELAY);
		gpio_write_bit(GPIO_MDC, 1);
		smi_delay(DELAY);
		gpio_write_bit(GPIO_MDC, 0);
		smi_delay(DELAY);
	}
}

uint32_t smi_write_cl22(uint8_t phyAddr, uint8_t regAddr, uint16_t regVal) {
	smi_lock();
	smi_write_bits(0xffff, 16);
	smi_write_bits(0xffff, 16);
	smi_write_bits(SMI_ST_CODE, 2);
	smi_write_bits(SMI_OP_WRITE, 2);
	smi_write_bits(phyAddr, 5);
	smi_write_bits(regAddr, 5);
	smi_write_bits(SMI_TA_CODE, 2);
	smi_write_bits(regVal, 16);
//	smi_unlock();

	return 0;
}

uint32_t smi_read_cl22(uint8_t phyAddr, uint8_t regAddr, uint16_t *pRegVal) {
	smi_lock();
	smi_write_bits(0xffff, 16);
	smi_write_bits(0xffff, 16);
	smi_write_bits(SMI_ST_CODE, 2);
	smi_write_bits(SMI_OP_READ, 2);
	smi_write_bits(phyAddr, 5);
	smi_write_bits(regAddr, 5);
	smi_read_bits(1, pRegVal);
	smi_write_bits(1, 1);
//	smi_read_bits(2, pRegVal);
	smi_read_bits(16, pRegVal);
//	smi_unlock();

	return 0;
}

uint32_t HAL_MEM_DIRECT_WRITE(uint8_t unit, uint32_t reg_addr,
		uint32_t reg_value) {
	uint16_t regVal;
	regVal = (reg_addr >> 16) & 0xffff;
	smi_write_cl22(unit, 0, regVal);
	regVal = reg_addr & 0xffff;
	smi_write_cl22(unit, 0, regVal);
	regVal = (reg_value >> 16) & 0xffff;
	smi_write_cl22(unit, 2, regVal);
	regVal = reg_value & 0xffff;
	smi_write_cl22(unit, 2, regVal);
	return 0;
}

uint32_t HAL_MEM_DIRECT_READ(uint8_t unit, uint32_t reg_addr,
		uint32_t *reg_value) {
	uint16_t regVal;
	uint32_t rData;

	regVal = (reg_addr >> 16) & 0xffff;
	smi_write_cl22(unit, 0x1, regVal);
	regVal = reg_addr & 0xffff;
	smi_write_cl22(unit, 0x1, regVal);
	regVal = 0x0;
	smi_read_cl22(unit, 0x3, &regVal);
	rData = (uint32_t) (regVal << 16);
	regVal = 0x0;
	smi_read_cl22(unit, 0x3, &regVal);
	rData |= regVal;
	*reg_value = rData;
	return 0;
}

uint32_t yt9215_intif_write(uint8_t unit, uint8_t intif_addr, uint32_t regAddr,
		uint16_t data) {
	uint32_t base_data;
	uint32_t op_data = 0;
	uint32_t wait_count = 0;

	HAL_MEM_DIRECT_READ(unit, INT_IF_ACCESS_ADDR_CTRL, &base_data);
	base_data &= 0xFC00FFF1;
	base_data |= ((intif_addr & 0x1f) << 21 | (regAddr & 0x1f) << 16 | 1 << 2);
	HAL_MEM_DIRECT_WRITE(unit, INT_IF_ACCESS_ADDR_CTRL, base_data);
	HAL_MEM_DIRECT_WRITE(unit, INT_IF_ACCESS_DATA_0_ADDR, data);
	op_data = 1;
	HAL_MEM_DIRECT_WRITE(unit, INT_IF_ACCESS_FRAME_CTRL, op_data);

	while (MAX_BUSYING_WAIT_TIME > wait_count) {
		HAL_MEM_DIRECT_READ(unit, INT_IF_ACCESS_FRAME_CTRL, &op_data);

		if (!op_data) {
			return 0;
		}
		wait_count++;
	}

	return 0;
}

uint32_t yt9215_intif_read(uint8_t unit, uint8_t intif_addr, uint32_t regAddr,
		uint16_t *pData) {
	uint32_t base_data;
	uint32_t op_data = 0;
	uint32_t wait_count = 0;

	HAL_MEM_DIRECT_READ(unit, INT_IF_ACCESS_ADDR_CTRL, &base_data);
	base_data &= 0xFC00FFF1;
	base_data |= ((intif_addr & 0x1f) << 21 | (regAddr & 0x1f) << 16 | 2 << 2);
	HAL_MEM_DIRECT_WRITE(unit, INT_IF_ACCESS_ADDR_CTRL, base_data);
	op_data = 1;
	HAL_MEM_DIRECT_WRITE(unit, INT_IF_ACCESS_FRAME_CTRL, op_data);

	while (MAX_BUSYING_WAIT_TIME > wait_count) {
		HAL_MEM_DIRECT_READ(unit, INT_IF_ACCESS_FRAME_CTRL, &op_data);

		if (!op_data) {
			HAL_MEM_DIRECT_READ(unit, INT_IF_ACCESS_DATA_1_ADDR, &base_data);
			*pData = base_data;
			return 0;
		}
		wait_count++;
	}

	return 0;
}
