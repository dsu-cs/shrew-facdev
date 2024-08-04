# SHREW
Repo for the Software and Hardware Reverse Engineering Workshop (SHREW). 

## Virtual Machines
The following virtual machine images are set up with the requisite software for the workshop.
* [Kali 2024.2 x86-64](https://share.ialab.dsu.edu/CAE_Workshops/2024/SHREW/Kali-2024.2-x86-64.zip) - for use with Intel-based processors.
* [Kali 2024.2 ARM64](https://share.ialab.dsu.edu/CAE_Workshops/2024/SHREW/Kali-2024.2-ARM.zip) - for use with ARM-based processors (e.g., Apple M2)

### System Requirements
* Processor cores: 2
* Free disk space: 64 GB
* RAM: 4 GB
* USB-A 2.0/3.0 ports (or USB-C adapter)

## Binaries
The [binaries directory](https://github.com/dsu-cs/shrew-facdev/tree/main/binaries) has software reverse engineering exercises.

## Firmware
Sample firmware from physical devices is located in the [firmware directory](https://github.com/dsu-cs/shrew-facdev/tree/main/firmware)

## Microbit
The [microbit directory](https://github.com/dsu-cs/shrew-facdev/tree/main/microbit) contains sample projects for building binaries written with C++ or the Arduino framework and documentation on the nRF5280 chip.

* [MakeCode](https://makecode.microbit.org) - browser app for writing micro:bit block code
* [micro:bit Pinout](https://tech.microbit.org/hardware/edgeconnector/) - Edge connector and pin diagrams
* [Nordic nRF52820 Documentation](https://www.nordicsemi.com/Products/nRF52820/Download#infotabs) - technical docs from the chip manufacture
* [Python Online micro:bit IDE](https://python.microbit.org/v/3) - browser app writing for micro:bit Python

## Resources 
* [The Hardware Hacking Handbook](https://nostarch.com/hardwarehacking)
* [Ghidra Cheat Sheet](https://ghidra-sre.org/CheatSheet.html) - keyboard shortcuts for Ghidra
* [GhidraChatGPT](https://github.com/SourceDiver42/Ghidra-ChatGPT) - ChatGPT plugin for Ghidra
* [Platform IO IDE (PIO)](https://platformio.org/platformio-ide) - VSCode plugin for writing embedded software (Arduino, MicroBit, etc.)
  * [PIO BBC micro:bit V2](https://docs.platformio.org/en/latest/boards/nordicnrf52/bbcmicrobit_v2.html#frameworks)
  * [PIO Nordic nRF52](https://github.com/platformio/platform-nordicnrf52/tree/develop)

