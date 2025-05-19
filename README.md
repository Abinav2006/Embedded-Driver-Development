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
│
├── Core/
│   ├── Inc/                   → Main application headers (e.g., main.h)
│   ├── Src/                   → Main application source files (e.g., main.c)
│   └── startup_stm32f446xx.s → Startup assembly code for STM32F446RE
│
├── Drivers/
│   ├── Inc/                   → Custom driver headers (e.g., gpio.h, uart.h)
│   ├── Src/                   → Custom driver source files (e.g., gpio.c, uart.c)
│
├── ProjectConfigs/
│   ├── .project               → STM32CubeIDE project configuration
│   ├── .cproject              → STM32CubeIDE build settings
│   └── STM32F446RE.ioc        → STM32CubeMX IOC file for peripheral setup
│
├── LICENSE                   → License file (MIT, Apache, etc.)
└── README.md                 → This project overview and documentation

## 📜 License

MIT License – free to use and modify!

