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
  * Connect SERVO - Pin D7, Light Sensor - Pin A0, LCD - Pin 12C.
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2032%2008.jpeg?raw=true"
  width="300">
  ---

2. ### Download library for Grove - LCD rgb Backlight here:
Firstly, download your LCD Library. Then enter the following code into your Arduino Programme on your desktop: 
    * https://github.com/Seeed-Studio/Grove_LCD_RGB_Backlight/archive/master.zip
    * https://github.com/loti-ibrahimi/Project-FINO/blob/master/Fino.ino
---   
3. ### Gathering/Setting up Materials:  
  * Find two similar in size cylinder containers, onebeing just big enough for the other to fit inside.
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2032%2031.jpeg?raw=true"
   width="300">

  * Create small semi-circle like shapes for the bottom of each container, which should be roughly similar in size, and parallel to one    another when together.
  
  * Grab yourself some strong Desinger Duct tape, or any normal duct tape. 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2000.jpeg?raw=true"
  width="300">
  
  * Cover up those containers with the tape, to give it some colour! (It also helps keep it more solid and firm). 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2015.jpeg?raw=true"
  width="300">
---
    ### Setting up your Servo + Light Sensor.
  * Create a Small hole (on the cap of the outer container) just big enough to barely fit the Servo Spinner in. (This provides support      for the Servo, and prevents it from collapsing into the inner container (**this must be secured with tape to ensure successful          rotations**). 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2031.jpeg?raw=true"
  width="300">
  * I suggest you super glue the Servo attachment to the cap of the inner container (You can then simply connnect cap with cap, to    	   combine attachment with Servo.
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2033%2046.jpeg?raw=true"
  width="300">
  
  Both Containers should look something like this: 
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2034%2000.jpeg?raw=true"
  width="300">
---
    ### Finishing Touch (Open-minded/experiment & try different prototypes)
  <img src="https://github.com/loti-ibrahimi/Project-FINO/blob/master/FinoProgress/File%2005-05-2017,%2002%2034%2013.jpeg?raw=true"
  width="300">
  * The end result for this particular feeder, invlolved a light senser imbedded at the bottom of the inner cylinder (connected with an  exiting wire through gaps cut out in-line, bridging the two containers. 
  * You may simply leave a small opening at the top of the inner container(to enable you to provide a light source). 
  * LCD + Arduino w/shield may be attached to your Prototype design or left loose, but of course conneceted!
---

    ### Explore!
This Project is open to your own imagination, create your feeder the way you want it to behave/look. 
* The code is there.
* Suggested Equipment is there.
* Intelligence is also present! Sensors!
Feel free to create your own final variation prototype & build it how you like using this programme...do share your results!






