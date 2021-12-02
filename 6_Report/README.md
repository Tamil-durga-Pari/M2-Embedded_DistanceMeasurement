INTRODUCTION :

  Distance measurement using HC-SR04 and ATMEGA328p. In this project i have measured distance in centimetres, with the help of HC-SR04 Ultrasound sensor, ATMEGA328p microcontroller, LCD Display via I2C bus.

PRINCIPLE:

  1. Timer2 of ATMEGA328p is used to generate a Trigger pulse of 20uS, the ultrasonic module sends out a 8cycle burst of 40khz which hits the object surface and returns back to raise an echo pulse. The pulse-width of this pulse is proportional to the distance between the module and Object.

  2. Input capture module of the ATMEGA was used to capture the time between rising and falling edges of the echo pulse. The prescaler of this unit was chosen, such that the resolution of pulse-width is 16uS.

  3. The Timer count (OCR2A) of Timer2 was chosen such that a trigger pulse signal of width 10uS is sent, and there is a pause (pin stays Digtal Low) for around 1.4mS.

IDENTIFY THE REQUIREMENTS:

HARWARE COMPONENTS:

1. Arduino-UNO
2. HC-SR04 Ultrasonice sensor
3. LCD Display with integrated PCf8574T chip enabling serial (I2C from uC) to parallel conversion.
4. 2.2k Pullup resistors for I2C bus.

SOFTWARE AND TOOLCHAIN:

1. Visual studio code.
2. AVR-GCC. 
3. SimulIDE.
4. make.
5. Operating System - Ubuntu(Linux).

![embedded diagram1](https://user-images.githubusercontent.com/94234015/144241445-e5993a74-cfc1-4923-a743-5e430f84649d.jpg)

![embedded diagram2 (2)](https://user-images.githubusercontent.com/94234015/144241922-739fcd4b-5f17-44ea-84a3-a42e8c8f3095.jpg)

SWOT ANALYSIS:

  Strength :

     1. This Project can be used to measure the distance to a wide range of objects regardless of shape.

  Weakness :

     1. This Project cannot be used in vaccum.

  Opportunities :

     1. Distance Measurement using atmega will reduce the time consumption and it measure the distance of small object even its is so far.

  Threats :

     1. Distance measurement using this project can be done only certain range based on the sensor.


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

Behavioral Diagram 1:

![image](https://user-images.githubusercontent.com/94234015/144190690-2bc18b90-87c3-42e9-8ab3-302749df3c26.png)

Behavioral Diagram 2:

![image](https://user-images.githubusercontent.com/94234015/144190506-7fe53fc9-6dac-4e1a-85d0-02bb726da151.png)

Structural Diagram :

![image](https://user-images.githubusercontent.com/94234015/144190086-4ce7220a-468d-4f3a-a604-6a986bafd1c8.png)

Block Diagram 1 :

![image](https://user-images.githubusercontent.com/94234015/144191181-963136cc-e7ab-40ef-bd2d-2c2c151e6a35.png)

Block Diagram 2 :

![image](https://user-images.githubusercontent.com/94234015/144191368-03b310a9-b254-47ee-8930-f34213f31d9a.png)

Programming Atmega328 with Embedded C Programming:

  Steps to build the code

  Steps to run the simulation

  Steps to verify the working of code

  Schematic circuits
  
  ![embedded diagram1 (1)](https://user-images.githubusercontent.com/94234015/144431775-29fe6b8d-b58a-462e-869a-85cd38d9420e.jpg)

![embedded diagram1 (2)](https://user-images.githubusercontent.com/94234015/144433276-d9b8522b-ef08-4a62-a72e-7cf7173a63fd.jpg)
    
