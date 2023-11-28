/*
    Copyright (c) 2021, CommunityGD32Cores

    Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors
       may be used to endorse or promote products derived from this software without
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.
*/

#ifndef _VARIANT_
#define _VARIANT_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* GPIO pins definitions */
#define PC13 0
#define PC14 1
#define PC15 2
#define PF0 3
#define PF1 4
#define PF4 5
#define PF5 6
#define PB2 7
#define PB10 8
#define PB11 9
#define PB12 10
#define PB13 11
#define PB14 12
#define PB15 13
#define PC6 14
#define PC7 15
#define PC8 16
#define PC9 17
#define PA8 18
#define PA9 19
#define PA10 20
#define PA11 21
#define PA12 22
#define PA13 23
#define PF6 24
#define PF7 25
#define PA14 26
#define PA15 27
#define PC10 28
#define PC11 29
#define PC12 30
#define PD2 31
#define PB3 32
#define PB4 33
#define PB5 34
#define PB6 35
#define PB7 36
#define PB8 37
#define PB9 38
/* analog pins */
#define PA4 39
#define PA1 40
#define PA5 41
#define PC1 42
#define PA0 43
#define PC2 44
#define PB1 45
#define PA3 46
#define PC5 47
#define PA7 48
#define PA2 49
#define PA6 50
#define PB0 51
#define PC0 52
#define PC4 53
#define PC3 54

/* digital pins and analog pins number definitions */
#define DIGITAL_PINS_NUM            55
#define ANALOG_PINS_NUM             16
#define ANALOG_PINS_START           PA4
#define ANALOG_PINS_LAST            PC3

/* LED definitions */
#define LED_BUILTIN                 PC13

/* user keys definitions */
#define KEY0                        PA0

/* SPI definitions */
#define PIN_SPI_SS                  PB12
#define PIN_SPI_MOSI                PB15
#define PIN_SPI_MISO                PB14
#define PIN_SPI_SCK                 PB13

/* I2C definitions */
/* I2C0 */
#define HAVE_I2C
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA                PB7
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL                PB6
#endif

/* TIMER or PWM definitions */
#define TIMER_TONE                  TIMER5
#define TIMER_SERVO                 TIMER6

#define PWM0                        PA0
#define PWM1                        PA1
#define PWM2                        PA2
#define PWM3                        PA3
#define PWM4                        PA4

/* Serial definitions */
/* "Serial" is by default Serial1 / USART0 */
#ifndef DEFAULT_HWSERIAL_INSTANCE
#define DEFAULT_HWSERIAL_INSTANCE   1
#endif

/* USART0 */
#define HAVE_HWSERIAL1
#ifndef SERIAL0_RX
#define SERIAL0_RX                  PA3
#endif
#ifndef SERIAL0_TX
#define SERIAL0_TX                  PA2
#endif

/* ADC definitions */
#define ADC_RESOLUTION              10
#define DAC_RESOLUTION              12

#ifdef __cplusplus
} // extern "C"
#endif

#ifdef __cplusplus
    /* Port which normally prints to the Arduino Serial Monitor */
    #define SERIAL_PORT_MONITOR     Serial
    /* Hardware serial port, physical RX & TX pins. */
    #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ */
