# Christmas_Lights_System
## Introducere

Proiectul consta in realizarea unui sistem inteligent de iluminare RGB controlabil de la distanta utilizand tehnologia Bluetooth.
Sistemul va fi implementat utilizand microcontroller-ul PIC18F24Q10 de la Microchip. 
## Descrierea sistemului
Proiectul presupune comandarea unei benzi led RGB de la distanta prin intermediul unui modul Bluetooth HC-05, conexiunea cu microcontroller-ul fiind realizata prin comunicatia seriala (UART).
### Parti componente
#### Microcontroller PIC18F24Q10;
 PIC18 Core with 83 Instructions, 31 Stack Levels
 - Internal 64MHz oscillator
 - Operating Voltage Range:- 1.8V – 5.5V
 - 32 KB Flash Program Memory with self read/write capability
 - 2048 Bytes Data SRAM Memory
 - 256 Bytes of EEPROM
 - 10-bit ADC with computation, 24 channels
 - 1 x 5-bit DAC
 - 2 x Comparators
 - Fixed Voltage Reference (FVR) module - 1.024V, 2.048V and 4.096V output levels
 - Hardware Capacitive Voltage Divider (CVD) for mTouch buttons/sliders
 - 1 x Zero-Cross Detect
 - 1 x I2C/SPI
 - 1 x EUSART with LIN support
 - CRC with Memory Scan
 - Windowed Watchdog Timer (WWDT)
 - 1 x Hardware Limit Timer (HLT)
 - 1 x Complementary Waveform Generator
 - 2 x standalone 10-bit PWM modules
 - 2 x Capture/Compare/PWM modules
 - Three 8-bit Timers/Counters
 - Four 16-bit Timers/Counters
 - 1 x Hardware Limit Timer (HLT)
 - Extended Watchdog Timer (WDT)
 - Doze, Idle, and Sleep Power Saving Operating Modes
 - Low Current Power-on Reset (POR)
 - Brown-out Reset (BOR)
 - Low-Power BOR (LPBOR)
 - Peripheral Pin Select
 - In-Circuit Debug Integrated On-Chip
 - In-Circuit Serial Programing (ICSP) via Two Pins

#### Modul Bluetooth HC-05 (UART); (TBD)
 - Tensiune alimentare: 3.6V - 6V
 - Consum: 30mA
 - Rază acoperire: max. 100m
 - Folosește protocolul IEEE 802.15.1 standardizat
 - Poate fi opera atât ca Master cât și Slave
 - Baud Rate: 9600, 19200, 38400, 57600, 115200, 230400, 460800
 
#### Banda led RGB 12V (14W/m);
 - Tip Banda LED
 - Schimbare culoare lumina Da
 - Culoare lumina RGB/Multicolor
 - Intensitate luminoasa (LM)720 lm/ml
 - Lungime (cm)500
 - Grad de protectie (IP)IP54
 - Material Silicon
 - Clasa energetica A+
 
#### Tranzistor TIP41C (PWM);
 - Transistor Polarity: NPN
 - Collector Emitter Voltage V(br)ceo: 100V
 - DC Collector Current: 6A
 - Power Dissipation Pd: 65W
 - Transistor Case Style: TO-220
 - Transistor Mounting: Through Hole
 - No. of Pins: 3Pins
 - Transition Frequency ft: -
 - DC Current Gain hFE: 15hFE
 - Operating Temperature Max: 150°C
 - Product Range: -
 - Automotive Qualification Standard: -
 
#### Senzor de lumina ambientala TEMT6000 (ADC). (TBD)
 - Collector-emitter voltage: 6 V
 - Collector-emitter voltage: 1.5 V
 - Maximum Current: 20 mA
 - Power supply mode: 3.3 V to 5 V
 - Wavelength: 570 nm
 - Detection angle: 60 °
 - Dimensions: 14 x 8 mm

#### Sursa de alimentare
 - 24W, 12V, 2A
 
#### PICkit3
 - Full-speed USB support using Windows standard drivers
 - Real-time execution
 - Processors run at maximum speeds
 - Built-in over-voltage/short circuit monitor
 - Low voltage to 5V (1.8-5V range)
 - Diagnostic LEDs (power, active, status)
 - Read/write program and data memory of microcontroller
 - Erase of all memory types (EEPROM, ID, configuration and program) with verification
 - Peripheral freeze at breakpoint
