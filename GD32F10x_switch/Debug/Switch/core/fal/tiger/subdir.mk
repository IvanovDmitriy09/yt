################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Switch/core/fal/tiger/fal_tiger_acl.c \
../Switch/core/fal/tiger/fal_tiger_ctrlpkt.c \
../Switch/core/fal/tiger/fal_tiger_debug.c \
../Switch/core/fal/tiger/fal_tiger_dispatch.c \
../Switch/core/fal/tiger/fal_tiger_dos.c \
../Switch/core/fal/tiger/fal_tiger_dot1x.c \
../Switch/core/fal/tiger/fal_tiger_index.c \
../Switch/core/fal/tiger/fal_tiger_init.c \
../Switch/core/fal/tiger/fal_tiger_interrupt.c \
../Switch/core/fal/tiger/fal_tiger_l2.c \
../Switch/core/fal/tiger/fal_tiger_lag.c \
../Switch/core/fal/tiger/fal_tiger_led.c \
../Switch/core/fal/tiger/fal_tiger_loopdetect.c \
../Switch/core/fal/tiger/fal_tiger_mirror.c \
../Switch/core/fal/tiger/fal_tiger_multicast.c \
../Switch/core/fal/tiger/fal_tiger_nic.c \
../Switch/core/fal/tiger/fal_tiger_oam.c \
../Switch/core/fal/tiger/fal_tiger_port.c \
../Switch/core/fal/tiger/fal_tiger_port_isolation.c \
../Switch/core/fal/tiger/fal_tiger_qos.c \
../Switch/core/fal/tiger/fal_tiger_rate.c \
../Switch/core/fal/tiger/fal_tiger_rma.c \
../Switch/core/fal/tiger/fal_tiger_sensor.c \
../Switch/core/fal/tiger/fal_tiger_stat.c \
../Switch/core/fal/tiger/fal_tiger_storm_ctrl.c \
../Switch/core/fal/tiger/fal_tiger_stp.c \
../Switch/core/fal/tiger/fal_tiger_struct.c \
../Switch/core/fal/tiger/fal_tiger_sys.c \
../Switch/core/fal/tiger/fal_tiger_vlan.c \
../Switch/core/fal/tiger/fal_tiger_vlan_translate.c \
../Switch/core/fal/tiger/fal_tiger_wol.c 

C_DEPS += \
./Switch/core/fal/tiger/fal_tiger_acl.d \
./Switch/core/fal/tiger/fal_tiger_ctrlpkt.d \
./Switch/core/fal/tiger/fal_tiger_debug.d \
./Switch/core/fal/tiger/fal_tiger_dispatch.d \
./Switch/core/fal/tiger/fal_tiger_dos.d \
./Switch/core/fal/tiger/fal_tiger_dot1x.d \
./Switch/core/fal/tiger/fal_tiger_index.d \
./Switch/core/fal/tiger/fal_tiger_init.d \
./Switch/core/fal/tiger/fal_tiger_interrupt.d \
./Switch/core/fal/tiger/fal_tiger_l2.d \
./Switch/core/fal/tiger/fal_tiger_lag.d \
./Switch/core/fal/tiger/fal_tiger_led.d \
./Switch/core/fal/tiger/fal_tiger_loopdetect.d \
./Switch/core/fal/tiger/fal_tiger_mirror.d \
./Switch/core/fal/tiger/fal_tiger_multicast.d \
./Switch/core/fal/tiger/fal_tiger_nic.d \
./Switch/core/fal/tiger/fal_tiger_oam.d \
./Switch/core/fal/tiger/fal_tiger_port.d \
./Switch/core/fal/tiger/fal_tiger_port_isolation.d \
./Switch/core/fal/tiger/fal_tiger_qos.d \
./Switch/core/fal/tiger/fal_tiger_rate.d \
./Switch/core/fal/tiger/fal_tiger_rma.d \
./Switch/core/fal/tiger/fal_tiger_sensor.d \
./Switch/core/fal/tiger/fal_tiger_stat.d \
./Switch/core/fal/tiger/fal_tiger_storm_ctrl.d \
./Switch/core/fal/tiger/fal_tiger_stp.d \
./Switch/core/fal/tiger/fal_tiger_struct.d \
./Switch/core/fal/tiger/fal_tiger_sys.d \
./Switch/core/fal/tiger/fal_tiger_vlan.d \
./Switch/core/fal/tiger/fal_tiger_vlan_translate.d \
./Switch/core/fal/tiger/fal_tiger_wol.d 

OBJS += \
./Switch/core/fal/tiger/fal_tiger_acl.o \
./Switch/core/fal/tiger/fal_tiger_ctrlpkt.o \
./Switch/core/fal/tiger/fal_tiger_debug.o \
./Switch/core/fal/tiger/fal_tiger_dispatch.o \
./Switch/core/fal/tiger/fal_tiger_dos.o \
./Switch/core/fal/tiger/fal_tiger_dot1x.o \
./Switch/core/fal/tiger/fal_tiger_index.o \
./Switch/core/fal/tiger/fal_tiger_init.o \
./Switch/core/fal/tiger/fal_tiger_interrupt.o \
./Switch/core/fal/tiger/fal_tiger_l2.o \
./Switch/core/fal/tiger/fal_tiger_lag.o \
./Switch/core/fal/tiger/fal_tiger_led.o \
./Switch/core/fal/tiger/fal_tiger_loopdetect.o \
./Switch/core/fal/tiger/fal_tiger_mirror.o \
./Switch/core/fal/tiger/fal_tiger_multicast.o \
./Switch/core/fal/tiger/fal_tiger_nic.o \
./Switch/core/fal/tiger/fal_tiger_oam.o \
./Switch/core/fal/tiger/fal_tiger_port.o \
./Switch/core/fal/tiger/fal_tiger_port_isolation.o \
./Switch/core/fal/tiger/fal_tiger_qos.o \
./Switch/core/fal/tiger/fal_tiger_rate.o \
./Switch/core/fal/tiger/fal_tiger_rma.o \
./Switch/core/fal/tiger/fal_tiger_sensor.o \
./Switch/core/fal/tiger/fal_tiger_stat.o \
./Switch/core/fal/tiger/fal_tiger_storm_ctrl.o \
./Switch/core/fal/tiger/fal_tiger_stp.o \
./Switch/core/fal/tiger/fal_tiger_struct.o \
./Switch/core/fal/tiger/fal_tiger_sys.o \
./Switch/core/fal/tiger/fal_tiger_vlan.o \
./Switch/core/fal/tiger/fal_tiger_vlan_translate.o \
./Switch/core/fal/tiger/fal_tiger_wol.o 


# Each subdirectory must supply rules for building sources it contributes
Switch/core/fal/tiger/%.o: ../Switch/core/fal/tiger/%.c Switch/core/fal/tiger/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra -g3 -DDEBUG -DGD32F10X_MD -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DBOARD_YT9215SC_DEFAULT_DEMO -DSWITCH_SERIES_TIGER -I"../inc" -I"../system/inc" -I"../system/inc/cmsis" -I"../system/inc/gd32f10x" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\common\include" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\common\boardprofile" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\cal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal\chipdef" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\phy" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\hal" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\fal\tiger" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl\ctrlif" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\sw_ctrl\mem" -I"C:\Users\Dmitriy\Desktop\GD32F10x\Switch\core\drv\mac" -std=gnu11 -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


