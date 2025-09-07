################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Switch/sw_ctrl_comm/src/sw_ctrl_comm_ioctl.c \
../Switch/sw_ctrl_comm/src/sw_ctrl_comm_smi.c 

C_DEPS += \
./Switch/sw_ctrl_comm/src/sw_ctrl_comm_ioctl.d \
./Switch/sw_ctrl_comm/src/sw_ctrl_comm_smi.d 

OBJS += \
./Switch/sw_ctrl_comm/src/sw_ctrl_comm_ioctl.o \
./Switch/sw_ctrl_comm/src/sw_ctrl_comm_smi.o 


# Each subdirectory must supply rules for building sources it contributes
Switch/sw_ctrl_comm/src/%.o: ../Switch/sw_ctrl_comm/src/%.c Switch/sw_ctrl_comm/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I../Switch/include -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\common\include" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


