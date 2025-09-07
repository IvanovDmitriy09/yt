#include <stdio.h>
#include <stdlib.h>

#include "diag/trace.h"
#include "timer.h"


#define CHIP_INTERFACE_SELECT_REG   (0x80394)
#define CHIP_INTERFACE_CTRL_REG   (0x80028)

uint32_t a, b, reg_data;

int main() {

	rcu_periph_clock_enable(RCU_GPIOA);

	timer_start();

	timer_sleep(1000);


	HAL_MEM_DIRECT_READ(29, CHIP_INTERFACE_CTRL_REG, &reg_data);
	reg_data |= 1 << 0;
	HAL_MEM_DIRECT_WRITE(29, CHIP_INTERFACE_CTRL_REG, reg_data);
	HAL_MEM_DIRECT_READ(29, CHIP_INTERFACE_SELECT_REG, &reg_data);
	reg_data &= ~(1 << 0);
	HAL_MEM_DIRECT_WRITE(29, CHIP_INTERFACE_SELECT_REG, reg_data);

//	smi_write_cl22(29, 0x0, 0x8);
//	timer_sleep(1);
//	smi_write_cl22(29, 0x0, 0x0408);
//	timer_sleep(1);
//	smi_write_cl22(29, 0x2, 0x841C);
//	timer_sleep(1);
//	smi_write_cl22(29, 0x2, 0x4108);
//	timer_sleep(10);

//	smi_read_cl22(uint8_t phyAddr, uint8_t regAddr, uint16_t *pRegVal);

	while (1) {

	}

}

// ----------------------------------------------------------------------------
