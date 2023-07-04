/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */



OBJ:= $(patsubst %.c, %.o, $(wildcard *.c))
Slist.exe: $(OBJ)
	gcc -o $@ $^  
clean:
	rm *.o *.exe



































/*
Updates upto 2023

Top Microcontrollers:
PIC           STM       Beaglebone   ARM          ATtiny(AVR)    Microchip(AVR, ATmega, PIC)
CC3235MODSF   Atmel     Cortex       AVR          Zilog          TI(MSP)
8051          Rpi       MSP          Intel 8051   Renesas        Holtek
ESP32	      Arduino   Teensy       NXP LPC      TI
	

Top Tools:
Keil      MPLAB          Espressif  
MATLAB    CCS
Ubuntu    SDK
IDE       Arduino IDE


Acadamics used tools:
IDE, MATLAB, LABORATORY(Basic Hardware related in bread board), 8086 Development Kits, 8086 Assembler, 8051 Cross Assembler,
Microcontroller, Xilinx, FPGA Boards, Embedded trainer kits with ARM Board, MASM(Macro Assembler)


Acadamics skills learned:
Python, Circuit lab, C, Data Structures, Analog and Digital Circuits, Linear IC lab, DSP lab, Network lab, Communication System lab,
VLSI, Microcontroller and Microprocessor, Embedded lab, Hardware


Top Operating Systems:	
Windows    Linux Kernel   Chrome_OS
Android	   Ubuntu         Apple_ios
Fedora     Linux          Debian
MAC_OS     Unix           Blackberry


Top Semiconductor Manufactures:
Taiwan Semiconductor Manufactures(TSM)  Micron Tech         Advanced Micro Devices  Renesas             MediaTek
Intel                                   NVIDIA              ASML Holding            Texas Instruments   RIR Power Electronics
Qualcomm                                Applied Materials   Infineon Tech           Analog Devices      Samsung Electronics
Broadcomm                               ASE Tech            Microchip               STMicroelectronics  NXP Semiconductor
SK Hynix                                ON Semiconductor    LAM Research            Global Foundries    NASDAQ : AMAT
Apple                                   Sony                Panasonic               Toshiba             Rohm semiconductor
Silicon labs





