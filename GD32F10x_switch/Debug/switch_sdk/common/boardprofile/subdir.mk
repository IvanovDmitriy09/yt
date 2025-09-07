################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../switch_sdk/common/boardprofile/bprofile_YT9215SC_default_demo.c 

C_DEPS += \
./switch_sdk/common/boardprofile/bprofile_YT9215SC_default_demo.d 

OBJS += \
./switch_sdk/common/boardprofile/bprofile_YT9215SC_default_demo.o 


# Each subdirectory must supply rules for building sources it contributes
switch_sdk/common/boardprofile/%.o: ../switch_sdk/common/boardprofile/%.c switch_sdk/common/boardprofile/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DPORT_INCLUDED -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\common\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\cal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal\chipdef" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\phy" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\common\boardprofile" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\hal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal\tiger" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\sw_ctrl" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\mac" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\sw_ctrl\ctrlif" -I"C:\Users\Dmitriy\Desktop\GD32F10x\src" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


