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
Keil      MPLAB          Espressif-IDE  
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

Top IT Companies:
Apple     - USA         Adobe    - USA        Cognizant - USA         Deloitte - USA      Mphasis  - India      Honeywell          - USA
Google    - USA         HP       - USA        Capgemini - France      Facebook - USA      LG Soft  - Korea      Schneider electric - France
Oracle    - USA         Amazon   - USA        SAP       - Germany     Intel    - USA      Mindtree - India 
Accenture - Ireland     Alphabet - USA        Nvidia    - USA         Dell     - USA      HCL      - India
TCS       - India       Meta     - USA        Wipro     - India       Qualcomm - USA      L & T    - India
Microsoft - USA         Infosys  - India      Broadcom  - USA         TI       - USA      KPIT     - India
IBM       - USA	        TSMC     - Taiwan     Cisco     - USA         Zoho     - USA    

Berkshire Hathaway - USA              DXC Technology       - USA          Tech Mahindra       - India
Samsung            - South korea      Visteon Technology   - USA          LTI Mindtree        - India
Salesforce         - USA              UST Global           - USA          Sasken Technologies - India
Micron Technology  - USA	      Continental          - Germany      Infineon Technology - Germany
Philips            - Netherlands      Hexaware Technolgies - India        STMicroelectronics  - Switzerland
NXP Semiconductors - Netherlands      Tata Elxsi           - India
Analog Devices     - USA	      Robert Bosch         - Germany

Indian Products:
MRF                SBI        Reliance Jio        Mahindra
Ashok Leyland      HDFC       Karbonn Mobiles     Tata Motors
Royal Enfield      KVB        Lava
FLipkart           Airtel     Micromax
Paytm              BSNL       Hero Motocorp
Ola                Bajaj      TVS motor

Products:
vodafone - UK

Mobiles:
Xiaomi - China     Samsung    - South Korea    Lenovo  - china       Oppo     - China     Huawei - China
Vivo   - China     Apple      - USA            Nokia   - Finland     Motorolo - USA       Sony   - Japan
Realme - China	   Blackberry - Canada         Oneplus - China       POCO     - China

Laptops:
Dell   - USA       Acer  - Taiwan      Microsoft - USA             Xiaomi - China
HP     - USA       Asus  - Taiwan      Samsung   - South korea
Lenovo - China	   Apple - USA         LG        - South korea

Bikes:
Honda  - Japan     Kawasaki - Japan       Harley Davidson - USA
Yamaha - Japan     Aprilia  - Italy
Ducati - Italy     KTM      - Austria 

Cars:
Toyota  - Japan          Ford    - USA            Audi          - Germany     MG Motors   - UK       Ferrari - Italy     Buggati     - France
Hyundai - South Korea    kia     - South Korea    Volkswagen    - Germany     Nissan      - Japan    Renualt - France    Lamborghini - Italy
Honda   - Japan          Porsche - Germany        Merceded Benz - Germany     Suzuki      - Japan    Jeep    - Italy
BMW     - Germany        Tesla   - USA            Chevrolet     - USA         Rolls royce - UK

Top Countries:
Switzerland      Australia          Germany          Netherlands
Canada           Unites States      New Zealand
Sweden           Japan              United Kingdom

Mostly European countries has best life cycle. United Kingdom shows how to live.

Richest Persons:
Elon Musk                   Mark Zuckerberg     
Jeff Bezos                  Bill Gates
Bernard Arnualt & Family









	
	








	


