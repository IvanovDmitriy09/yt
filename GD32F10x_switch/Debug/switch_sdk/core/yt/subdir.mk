################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../switch_sdk/core/yt/yt_acl.c \
../switch_sdk/core/yt/yt_ctrlpkt.c \
../switch_sdk/core/yt/yt_debug.c \
../switch_sdk/core/yt/yt_dos.c \
../switch_sdk/core/yt/yt_dot1x.c \
../switch_sdk/core/yt/yt_exit.c \
../switch_sdk/core/yt/yt_init.c \
../switch_sdk/core/yt/yt_interrupt.c \
../switch_sdk/core/yt/yt_l2.c \
../switch_sdk/core/yt/yt_lag.c \
../switch_sdk/core/yt/yt_led.c \
../switch_sdk/core/yt/yt_loopdetect.c \
../switch_sdk/core/yt/yt_mirror.c \
../switch_sdk/core/yt/yt_multicast.c \
../switch_sdk/core/yt/yt_nic.c \
../switch_sdk/core/yt/yt_oam.c \
../switch_sdk/core/yt/yt_port.c \
../switch_sdk/core/yt/yt_port_isolation.c \
../switch_sdk/core/yt/yt_qos.c \
../switch_sdk/core/yt/yt_rate.c \
../switch_sdk/core/yt/yt_rma.c \
../switch_sdk/core/yt/yt_sensor.c \
../switch_sdk/core/yt/yt_stat.c \
../switch_sdk/core/yt/yt_storm_ctrl.c \
../switch_sdk/core/yt/yt_stp.c \
../switch_sdk/core/yt/yt_sys.c \
../switch_sdk/core/yt/yt_vlan.c \
../switch_sdk/core/yt/yt_vlan_translate.c \
../switch_sdk/core/yt/yt_wol.c 

C_DEPS += \
./switch_sdk/core/yt/yt_acl.d \
./switch_sdk/core/yt/yt_ctrlpkt.d \
./switch_sdk/core/yt/yt_debug.d \
./switch_sdk/core/yt/yt_dos.d \
./switch_sdk/core/yt/yt_dot1x.d \
./switch_sdk/core/yt/yt_exit.d \
./switch_sdk/core/yt/yt_init.d \
./switch_sdk/core/yt/yt_interrupt.d \
./switch_sdk/core/yt/yt_l2.d \
./switch_sdk/core/yt/yt_lag.d \
./switch_sdk/core/yt/yt_led.d \
./switch_sdk/core/yt/yt_loopdetect.d \
./switch_sdk/core/yt/yt_mirror.d \
./switch_sdk/core/yt/yt_multicast.d \
./switch_sdk/core/yt/yt_nic.d \
./switch_sdk/core/yt/yt_oam.d \
./switch_sdk/core/yt/yt_port.d \
./switch_sdk/core/yt/yt_port_isolation.d \
./switch_sdk/core/yt/yt_qos.d \
./switch_sdk/core/yt/yt_rate.d \
./switch_sdk/core/yt/yt_rma.d \
./switch_sdk/core/yt/yt_sensor.d \
./switch_sdk/core/yt/yt_stat.d \
./switch_sdk/core/yt/yt_storm_ctrl.d \
./switch_sdk/core/yt/yt_stp.d \
./switch_sdk/core/yt/yt_sys.d \
./switch_sdk/core/yt/yt_vlan.d \
./switch_sdk/core/yt/yt_vlan_translate.d \
./switch_sdk/core/yt/yt_wol.d 

OBJS += \
./switch_sdk/core/yt/yt_acl.o \
./switch_sdk/core/yt/yt_ctrlpkt.o \
./switch_sdk/core/yt/yt_debug.o \
./switch_sdk/core/yt/yt_dos.o \
./switch_sdk/core/yt/yt_dot1x.o \
./switch_sdk/core/yt/yt_exit.o \
./switch_sdk/core/yt/yt_init.o \
./switch_sdk/core/yt/yt_interrupt.o \
./switch_sdk/core/yt/yt_l2.o \
./switch_sdk/core/yt/yt_lag.o \
./switch_sdk/core/yt/yt_led.o \
./switch_sdk/core/yt/yt_loopdetect.o \
./switch_sdk/core/yt/yt_mirror.o \
./switch_sdk/core/yt/yt_multicast.o \
./switch_sdk/core/yt/yt_nic.o \
./switch_sdk/core/yt/yt_oam.o \
./switch_sdk/core/yt/yt_port.o \
./switch_sdk/core/yt/yt_port_isolation.o \
./switch_sdk/core/yt/yt_qos.o \
./switch_sdk/core/yt/yt_rate.o \
./switch_sdk/core/yt/yt_rma.o \
./switch_sdk/core/yt/yt_sensor.o \
./switch_sdk/core/yt/yt_stat.o \
./switch_sdk/core/yt/yt_storm_ctrl.o \
./switch_sdk/core/yt/yt_stp.o \
./switch_sdk/core/yt/yt_sys.o \
./switch_sdk/core/yt/yt_vlan.o \
./switch_sdk/core/yt/yt_vlan_translate.o \
./switch_sdk/core/yt/yt_wol.o 


# Each subdirectory must supply rules for building sources it contributes
switch_sdk/core/yt/%.o: ../switch_sdk/core/yt/%.c switch_sdk/core/yt/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DPORT_INCLUDED -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\common\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\cal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal\chipdef" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\phy" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\common\boardprofile" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\hal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\fal\tiger" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\sw_ctrl" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\mac" -I"C:\Users\Dmitriy\Desktop\GD32F10x\switch_sdk\core\drv\sw_ctrl\ctrlif" -I"C:\Users\Dmitriy\Desktop\GD32F10x\src" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


