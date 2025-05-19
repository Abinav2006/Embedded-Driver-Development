# Embedded-Driver-Development
Bare-metal driver development projects for the STM32F446RE microcontroller using STM32CubeIDE. This repository contains low-level peripheral drivers written without relying on HAL or CMSIS abstractions. Focused on gaining a deep understanding of ARM Cortex-M4 and STM32 hardware through register-level programming.

# STM32 Bare-Metal Driver Development 🚀

This repository showcases bare-metal peripheral driver development for the STM32F446RE microcontroller, using STM32CubeIDE. All code is written by directly accessing peripheral registers—no HAL or CMSIS driver layers used.

## 🔧 Features

- ✅ GPIO driver (input, output, alternate function)
- ✅ UART (transmit/receive with polling)
- ✅ SPI (master mode)
- ✅ I2C (basic master transmit)
- ✅ Timer configuration
- ✅ ADC polling mode
- ✅ SysTick timer and delays
- ✅ NVIC and interrupt configuration
- ✅ Minimal startup file and linker script (CubeMX generated)

## 🧠 Learning Objectives

- Understand the STM32F4 memory map and peripheral registers
- Write reusable and modular low-level drivers
- Gain experience in register-level debugging and bit manipulation
- Build a solid foundation for writing your own RTOS or bootloader

## 💻 Tools Used

- STM32CubeIDE
- STM32F446RE (Nucleo-64 board)
- Logic Analyzer (optional)
- Serial Terminal (PuTTY, Tera Term, etc.)

## 📁 Folder Structure
│<br>
├── Core/<br>
│   ├── Inc/&nbsp;                   → Main application headers (e.g., main.h)<br>
│   ├── Src/&nbsp;                   → Main application source files (e.g., main.c)<br>
│   └── startup_stm32f446xx.s&nbsp; → Startup assembly code for STM32F446RE<br>
│<br>
├── Drivers/<br>
│   ├── Inc/&nbsp;                   → Custom driver headers (e.g., gpio.h, uart.h)<br>
│   ├── Src/&nbsp;                   → Custom driver source files (e.g., gpio.c, uart.c)<br>
│<br>
├── ProjectConfigs/<br>
│   ├── .project&nbsp;               → STM32CubeIDE project configuration<br>
│   ├── .cproject&nbsp;              → STM32CubeIDE build settings<br>
│   └── STM32F446RE.ioc&nbsp;        → STM32CubeMX IOC file for peripheral setup<br>
│<br>
├── LICENSE&nbsp;                   → License file (MIT, Apache, etc.)<br>
└── README.md&nbsp;                 → This project overview and documentation<br>

## 📜 License

MIT License – free to use and modify!

