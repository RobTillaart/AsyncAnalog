#pragma once
//
//    FILE: AsyncAnalog.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.1
//    DATE: 2018-09-05
// PURPOSE: async version of analogRead
//     URL: https://github.com/RobTillaart/AsyncAnalog
//

#if !defined(ARDUINO_ARCH_AVR)
  #error “AsyncAnalog library 0.1.1 only supports boards with an AVR processor .”
#endif
// (ARDUINO_ARCH_SAM) future


#include "Arduino.h"
#include "wiring_private.h"
#include "pins_arduino.h"

#define ASYNCANALOG_LIB_VERSION "0.1.1"

class AsyncAnalog
{
public:
    AsyncAnalog(uint8_t pin);

    void start();
    bool ready();
    int  value();

private:
    uint8_t _pin;
};

// -- END OF FILE --
