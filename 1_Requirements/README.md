INTRODUCTION :

Distance measurement using HC-SR04 and ATMEGA328p. In this project i have measured distance in centimetres, with the help of HC-SR04 Ultrasound sensor, ATMEGA328p microcontroller, LCD Display via I2C bus.

PRINCIPLE:

Timer2 of ATMEGA328p is used to generate a Trigger pulse of 20uS, the ultrasonic module sends out a 8cycle burst of 40khz which hits the object surface and returns back to raise an echo pulse. The pulse-width of this pulse is proportional to the distance between the module and Object.

Input capture module of the ATMEGA was used to capture the time between rising and falling edges of the echo pulse. The prescaler of this unit was chosen, such that the resolution of pulse-width is 16uS.

The Timer count (OCR2A) of Timer2 was chosen such that a trigger pulse signal of width 10uS is sent, and there is a pause (pin stays Digtal Low) for around 1.4mS.

IDENTIFY THE REQUIREMENTS:

HARWARE COMPONENTS:

1. Arduino-UNO
2. HC-SR04 Ultrasonice sensor
3. LCD Display with integrated PCf8574T chip enabling serial (I2C from uC) to parallel conversion.
4. 2.2k Pullup resistors for I2C bus.

SOFTWARE AND TOOLCHAIN:

1. Software was written entirely in C,
2. AVR-GCC compiler was used,
3. Operating System - Ubuntu(Linux)

![embedded diagram1](https://user-images.githubusercontent.com/94234015/144241445-e5993a74-cfc1-4923-a743-5e430f84649d.jpg)

![embedded diagram2 (2)](https://user-images.githubusercontent.com/94234015/144241922-739fcd4b-5f17-44ea-84a3-a42e8c8f3095.jpg)


4W's and 1H:
  
  WHAT:
  
    1. This Project is to detect small objects over long distances.
    
    2. It can measure distance to wide range of objects regardless of shape,color or surface texture.
    
  WHERE:
    
    1. This Project is used throughout many applications and industries.
    
    2. They used in food and beverage industry to measure liquid level in bottle and in automated process.
    
  WHY:
   
    1. This Project is uesd to measure distances precisely and whenever these light strike a obstacle and return back in the form of an echo . Difference of outgoing sound and
    
    returning echo gives us the distance.
    
  WHEN:
  
    1.This Project can be used at the time of loop control,robot sensing,tank level detection.
    
  HOW:
   
   1. This Project  will measure distance  by calculating the time taken by the echo signal to travel back after reflection from the desired target.
    
    
