# Project FINO
---
![](https://github.com/loti-ibrahimi/Project-FINO/blob/master/LogoSample_ByTailorBrands.jpg?raw=true)

Automated bird feeder built using:
* Arduino.
* Grove Servo.
* Grove Light Sensor.
* Grove LCD.
* 2x Cylinder containers & plenty of tape! 

---

## What is FINO?
FINO, is a simple mechanical device which enables bird food to flow out to an open space, which may be set automatically, to feed at 
specified periods/intervals. The Light Sensor helps depicts whether the Container is 'FULL' or 'EMPTY', which is displayed on an LCD.

Here is a snippet of the code, which may also be found in full in the GitHub Repositary of FINO: 
* https://github.com/loti-ibrahimi/Fino/blob/master/Fino.ino.

~~~
{
  for(pos = 0; pos < 180; pos ++) {  // Servo Rotates from 0 to 180
          myservo.write(pos);
          delay(2);                   //short delay for 2 milliseconds.          
    }
    for(pos = 180; pos > 0; pos --) {   // Servo Rotates from 180 to 0
          myservo.write(pos);
          delay(2);                  //short delay for 2 milliseconds.
    }
    delay(20000);                  //delay of 20 seconds  [Change this value to your liking]
}

~~~

---

## Steps On How to Make your very own Bird Feeder!
<img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2026%2054.jpeg?raw=true" width="300">

1. ### Configure Setup as shown in the diagrams: 
  *Connect SERVO - Pin D7, Light Sensor - Pin A0, LCD - Pin 12C.
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2032%2008.jpeg?raw=true"
  width="300">
  ---

2. ### Download library for Grove - LCD rgb Backlight here:
   * https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight/archive/master.zip
   Enter the following code into your Arduino Programme on your desktop: 
   * https://github.com/loti-ibrahimi/Project-FINO/blob/master/Fino.ino
---   
3. ### Gathering/Setting up Matterials:  
  * Find two similar in size cylinder containers, onebeing just big enough for the other to fit inside. E.g Crisp Box + Salt container.
<img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2032%2031.jpeg?raw=true"
width="300">

  * Crave small semi-circle like shapes for the bottom of each container, which should be roughly similar in size, and parallel to one another when together.
  
  * Grab yourself some strong Desinger Duct tape, or any normal duct tape. 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2000.jpeg?raw=true"
  width="300">
  
  * Cover up those containers with the tape, to give it some colour! (It also helps keep it more solid and firm). 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2015.jpeg?raw=true"
  width="300">
  ---
4. ### Setting up your Servo + Light Sensor.
  * Create a Small hole (on the cap of the outer container) just big enough to barely fit the Servo Spinner in. 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2031.jpeg?raw=true"
  width="300">
  * I suggest you super glue the Servo attachment to the cap of the inner container (You can then simply connnect cap with cap, to    	   combine attachment with Servo.
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2046.jpeg?raw=true"
  width="300">
  
  Both Containers should look something like this: 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2034%2000.jpeg?raw=true"
  width="300">
  ---





