# General
* What is an Embedded System
* How do you differentiate embedded systems
* Give few examples of Embedded Systems
* Do every Embedded System is a realtime system
* What is RTOS?

# Architecture
* What is the MCU in Arduino UNO board, and it belongs to which architecture?
* What is the MCU in STM32 F4 Discovery board, and it belongs to which architecture? (Same applies to Nucleo board)
* What are the common types of memory in a microcontroller?
* Explain the concept of memory-mapped I/O.


# GPIO
* Name few Digital/GPIO sensors
* List important registers of GPIO interface (Mode, Pull-up and Pull-down
* What are the steps involved in GPIO Device initialization
* PWM Signals
* PORTs and PINs, e.g. DDRx, PORTx, PINx in Atmega.

# ADC
* Name few Analog sensors
* Explain ADC Resolution and mapping voltage levels with digital values.
* What is the resolution of 10 bit ADC 

# Interrrupts
* What are Interrupts and how do you handle them
* What are key considerations in designing ISRs (short/not lengthy, no blocking calls)
* Maskable and Non Maskable Interrupts
* Edge Triggered Interrupts - FALLING Edge , RISING Edge 
* What are nested interrupts
* Explain about Nested Interrupt Vector Controller (NVIC)
* What is Interrupt Latency and how do you measure it
* Interrupt Priority
  
# Timers
* Role and significance of Timers in an embedded system

# Serial (UART/USART)
* What is the difference between UART and USART
* List important registers of UART interface
* What are the steps/parameters involved in UART Device initialization
* What are common baud rates used in UART communication
* How can you acheive synchronization in UART 


# I2C
* What is I2C and how does it work
* What are the advantages of I2C protocol
* Explain pin interface of I2C (Hints:- SCL, SDA)
* Name one I2C sensor/actuator
* What are the steps involved in I2C Master initialization
* Key differences between SPI and I2C
  
# SPI
* What is SPI and how does it work
* What are the advantages of SPI protocol
* Explain pin interface of SPI (Hints:- MOSI, MISO, SCLK, CS)
* Name one SPI sensor/actuator
* What are the steps involved in SPI Master initialization
* Key differences between SPI and I2C
  
## Debugging
* What is a serial Monitor?
* How do you check serial debug messages (Hint - Serial Terminal software on Windows/Linux)
* What is JTAG?
* Can we use printf in firmware coding, if not what's the alternative for output messages.
* Can we use printf inside an ISR

# Additional
* What is RTC (Real Time Clock)
* Explain the need and usage of Watchdog Timers (WDT)

> If you are claiming Automotive (As a skil/project/internship) - refer CAN Qs
# CAN
* How CAN Protocol works
* What are different types of CAN Frames (Data, Remote, Error, Overload frames)
* What is ID range and Data (payload) range in standard CAN frames
* Extended CAN Frames, CAN FD Frames
* Bus Arbitration in CAN, Priority of CAN Frames
* Bit Stuffing
* Baudrate of CAN
