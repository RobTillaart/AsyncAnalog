# AsyncAnalog

Arduino Library for async reading of an analog pin. **\[AVR ONLY\]**


## Description
AsyncAnalog is a library to read the analog port in an asynchronous way.
This means that the user must explicitly **start** the ADC, check if it is **ready**
and read out its **value**.

By using this class, the user prevents the (112 uSec) blocking of the 
**analogRead()** call, and gives the user the ability to do some processing.

The library works only for AVR boards now, other platforms might be supported in the future.

As the UNO has only one ADC that is multiplexed, one can only read one analog pin
in async way simultaneously.

## Operation
The library consists of three main function:

* **void start()**
* **bool ready()**
* **int value()**

The example **asyncAnalogTest2.ino** shows a loop of 1000 analogReads and prints 
over Serial at 115200 baud. The async test does this in less time. Note that faster
baudrates shows an even bigger difference. 


