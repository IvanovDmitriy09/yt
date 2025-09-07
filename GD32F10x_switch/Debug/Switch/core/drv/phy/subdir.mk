################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Switch/core/drv/phy/phy_drv.c \
../Switch/core/drv/phy/phy_int_serdes.c \
../Switch/core/drv/phy/phy_int_yt861x.c \
../Switch/core/drv/phy/phy_yt8531.c 

C_DEPS += \
./Switch/core/drv/phy/phy_drv.d \
./Switch/core/drv/phy/phy_int_serdes.d \
./Switch/core/drv/phy/phy_int_yt861x.d \
./Switch/core/drv/phy/phy_yt8531.d 

OBJS += \
./Switch/core/drv/phy/phy_drv.o \
./Switch/core/drv/phy/phy_int_serdes.o \
./Switch/core/drv/phy/phy_int_yt861x.o \
./Switch/core/drv/phy/phy_yt8531.o 


# Each subdirectory must supply rules for building sources it contributes
Switch/core/drv/phy/%.o: ../Switch/core/drv/phy/%.c Switch/core/drv/phy/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\common\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\common\boardprofile" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\cal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal\chipdef" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\phy" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\hal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal\tiger" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl\ctrlif" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl\mem" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\mac" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


