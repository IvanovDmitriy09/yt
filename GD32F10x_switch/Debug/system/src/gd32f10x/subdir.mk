################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/gd32f10x/gd32f10x_adc.c \
../system/src/gd32f10x/gd32f10x_bkp.c \
../system/src/gd32f10x/gd32f10x_can.c \
../system/src/gd32f10x/gd32f10x_crc.c \
../system/src/gd32f10x/gd32f10x_dac.c \
../system/src/gd32f10x/gd32f10x_dbg.c \
../system/src/gd32f10x/gd32f10x_dma.c \
../system/src/gd32f10x/gd32f10x_enet.c \
../system/src/gd32f10x/gd32f10x_exmc.c \
../system/src/gd32f10x/gd32f10x_exti.c \
../system/src/gd32f10x/gd32f10x_fmc.c \
../system/src/gd32f10x/gd32f10x_fwdgt.c \
../system/src/gd32f10x/gd32f10x_gpio.c \
../system/src/gd32f10x/gd32f10x_i2c.c \
../system/src/gd32f10x/gd32f10x_it.c \
../system/src/gd32f10x/gd32f10x_misc.c \
../system/src/gd32f10x/gd32f10x_pmu.c \
../system/src/gd32f10x/gd32f10x_rcu.c \
../system/src/gd32f10x/gd32f10x_rtc.c \
../system/src/gd32f10x/gd32f10x_sdio.c \
../system/src/gd32f10x/gd32f10x_spi.c \
../system/src/gd32f10x/gd32f10x_timer.c \
../system/src/gd32f10x/gd32f10x_usart.c \
../system/src/gd32f10x/gd32f10x_wwdgt.c 

C_DEPS += \
./system/src/gd32f10x/gd32f10x_adc.d \
./system/src/gd32f10x/gd32f10x_bkp.d \
./system/src/gd32f10x/gd32f10x_can.d \
./system/src/gd32f10x/gd32f10x_crc.d \
./system/src/gd32f10x/gd32f10x_dac.d \
./system/src/gd32f10x/gd32f10x_dbg.d \
./system/src/gd32f10x/gd32f10x_dma.d \
./system/src/gd32f10x/gd32f10x_enet.d \
./system/src/gd32f10x/gd32f10x_exmc.d \
./system/src/gd32f10x/gd32f10x_exti.d \
./system/src/gd32f10x/gd32f10x_fmc.d \
./system/src/gd32f10x/gd32f10x_fwdgt.d \
./system/src/gd32f10x/gd32f10x_gpio.d \
./system/src/gd32f10x/gd32f10x_i2c.d \
./system/src/gd32f10x/gd32f10x_it.d \
./system/src/gd32f10x/gd32f10x_misc.d \
./system/src/gd32f10x/gd32f10x_pmu.d \
./system/src/gd32f10x/gd32f10x_rcu.d \
./system/src/gd32f10x/gd32f10x_rtc.d \
./system/src/gd32f10x/gd32f10x_sdio.d \
./system/src/gd32f10x/gd32f10x_spi.d \
./system/src/gd32f10x/gd32f10x_timer.d \
./system/src/gd32f10x/gd32f10x_usart.d \
./system/src/gd32f10x/gd32f10x_wwdgt.d 

OBJS += \
./system/src/gd32f10x/gd32f10x_adc.o \
./system/src/gd32f10x/gd32f10x_bkp.o \
./system/src/gd32f10x/gd32f10x_can.o \
./system/src/gd32f10x/gd32f10x_crc.o \
./system/src/gd32f10x/gd32f10x_dac.o \
./system/src/gd32f10x/gd32f10x_dbg.o \
./system/src/gd32f10x/gd32f10x_dma.o \
./system/src/gd32f10x/gd32f10x_enet.o \
./system/src/gd32f10x/gd32f10x_exmc.o \
./system/src/gd32f10x/gd32f10x_exti.o \
./system/src/gd32f10x/gd32f10x_fmc.o \
./system/src/gd32f10x/gd32f10x_fwdgt.o \
./system/src/gd32f10x/gd32f10x_gpio.o \
./system/src/gd32f10x/gd32f10x_i2c.o \
./system/src/gd32f10x/gd32f10x_it.o \
./system/src/gd32f10x/gd32f10x_misc.o \
./system/src/gd32f10x/gd32f10x_pmu.o \
./system/src/gd32f10x/gd32f10x_rcu.o \
./system/src/gd32f10x/gd32f10x_rtc.o \
./system/src/gd32f10x/gd32f10x_sdio.o \
./system/src/gd32f10x/gd32f10x_spi.o \
./system/src/gd32f10x/gd32f10x_timer.o \
./system/src/gd32f10x/gd32f10x_usart.o \
./system/src/gd32f10x/gd32f10x_wwdgt.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/gd32f10x/%.o: ../system/src/gd32f10x/%.c system/src/gd32f10x/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DPORT_INCLUDED -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x_switch\src" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


