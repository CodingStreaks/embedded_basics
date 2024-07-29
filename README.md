# embedded_basics
This repository will guide you through the basics of programming a microcontroller. It starts from atmega328p based Arduino boards to some advanced ARM controllers
## Overview
## Software requirements
### For AVR microcontollers (Atmega328P here)
Cross toolchain: This is required for the cross compilation of source code for the Atmega328P target. It can be downloaded from [here](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio/gcc-compilers)
AVR dude: This is a utility to program the AVR microcontrollers. This can be build from [source](https://github.com/avrdudes/avrdude) or the binaries can be downaloed from the latest stabe release which is metioned in the source repository.
## Board requirements
For the practice purpose different boards can be used. This repository mostly has examples with the following boards.
Arduino R3
![Board](images/uno-r3-smd-compatible-model-800x800.png)
This is a low cost atmega328p board which has support for all basic peripherals such as UART, I2C, SPI, ADC, Timer, PWMs etc. making it a perfect candidate for beginers. This board support the programming through Arduino IDE but for the sake of learning the examples will be based on bare metal programming. The tools changes that are required and links are provided in the Software requirement section. The board shown in the image can be obtained from [Pruchase here](https://www.electronicscomp.com/uno-r3-smd-atmega328p-board-compatible-india?gad_source=1&gclid=Cj0KCQjw-5y1BhC-ARIsAAM_oKn8XbTHjkpT_6aKWXE12O16fdge9V9X0N_DTJP0dTU-5WxDjsnMbrsaAn1wEALw_wcB).
This is a low cost make of original arduino board. So, the schematic might not match with Arduino. The schematic will be added in the Schematic section.
## Schematics