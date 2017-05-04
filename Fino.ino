/* Created by: Loti Ibrahimi
 * Date: 04/05/2017
 *  
 *                          |Project Fino Code|
 *  ------------------------------------------------------------------------------
 *  This code enables the servo to rotate the food container and disperse food 
 *  @ designated times. 
 *  
 *  By default the Light Sensor indicates the food container is 'EMPTY'.
 *  As the loop continues and if food is added, upon re-entering the loop,
 *  it will pick up the new value of 'FULL' and remain that way until it 
 *  becomes empty again, and the loop re-enters, changing back to 'EMPTY'.
 *  
 *  How does this work?.. 
 *  When Light Sensor is covered by Food, Analog reading will be as close to 0 as possible,
 *   i.e Dark, i.e 'FULL'.
 *  When Light Sensor is left open (not enough food to cover), 
 *  Analog value will read over 500(average), i.e Light, i.e 'EMPTY'.
 *  
 *  -------------------------------------------------------------------------------
 *  After running the Programme, open Tools > Serial Monitor. 
 *  This Displays the range of values after each loop, either 
 *  increasing (as it gets bright) or decreasing (as it gets dark).
 *  -------------------------------------------------------------------------------
 *  
 *  Throughout this procedure, the container is continuously rotated by the Servo,
 *  at time intervals set by the user. Guide to setting intervals below. 
 *  
 *                 | Setting the time intervals for your Feeder |
 * --------------------------------------------------------------------------------                
 *  [Values for time are recorded in Milliseconds, without any comas in the figure]
 *  -------------------------------------------------------------------------------
 *  If you wish to set it every few seconds: [E.g 20 seconds]:
 *  | milliseconds = seconds x 1,000 |  i.e  20 x 1,000 = 20,000.
 *  
 *  If you wish to set it every few minutes: [E.g 10 minutes]:
 *  | milliseconds = minutes x 60,000 |   i.e  10 x 60,000 = 60,000. 
 *  
 *  If you wish to set it every few hours: [E.g 1 hour]:
 *  | milliseconds = hours x 3,600,000 |  i.e 1 x 3,600,000 = 3,600,000.
 */

#include <Servo.h>
#include <rgb_lcd.h>

Servo myservo;  // create servo object to control a servo
rgb_lcd lcd;    

int pos = 0;    // variable to store the servo position
int analogValue = 0;

const int ServoPin = 7; 
int LightSensorPin = A0;  //declare integer for LightSensor Pin
int val = 0;      // integer to store value for LightSensor Pin

const int colorR = 94;
const int colorG = 143;
const int colorB = 242;

void setup() {
  myservo.attach(7);  // Attaches the servo pin D7 to the servo object
  pinMode(ServoPin, OUTPUT);   

  pinMode(LightSensorPin, INPUT);  //Pin Mode for LightSensor Read.
  Serial.begin(9600);     // Begin serial communication @ 9600 baud (For Serial Moniter).

  lcd.begin(0,2);  // Set up the LCD's number of columns and rows:   
  lcd.setRGB(colorR, colorG, colorB);    
  lcd.print("Status: EMPTY!");  // Print a message to the LCD.
}

void loop() { 
      val = analogRead(LightSensorPin); // Read analog value of LightSensor Pin, 0 to 1023
      Serial.println(val);  // Serial prints the Value
      // Limits  val between ..  to ..
      delay(200);
      
    analogValue = analogRead(LightSensorPin);
     if(analogValue < 300)      // If analog reading on Sensor is below this value. 
    {
        lcd.begin(0,2);                         
        lcd.setRGB(colorR, colorG, colorB);
        lcd.print("Status: FULL!");
        delay(500);
    }
    else{
        lcd.begin(0,2);
        lcd.setRGB(colorR, colorG, colorB);
        lcd.print("Status: EMPTY!");
        delay(500);
    }
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
