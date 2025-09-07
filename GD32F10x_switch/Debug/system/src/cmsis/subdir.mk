################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/cmsis/system_gd32f10x.c \
../system/src/cmsis/vectors_gd32f10x.c 

C_DEPS += \
./system/src/cmsis/system_gd32f10x.d \
./system/src/cmsis/vectors_gd32f10x.d 

OBJS += \
./system/src/cmsis/system_gd32f10x.o \
./system/src/cmsis/vectors_gd32f10x.o 


# Each subdirectory must supply rules for building sources it contributes
system/src/cmsis/%.o: ../system/src/cmsis/%.c system/src/cmsis/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DPORT_INCLUDED -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x_switch\src" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


