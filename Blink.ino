/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
//#define LED 11
int const trigpin= 10;
int const echopin= 9;
int const trigpin2=12;
int const echopin2= 11;
int const trigpin3= 7;
int const echopin3= 6;

int const Green= 2;
int const Yellow= 1;
int const Red= 3;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
      pinMode(trigpin2, OUTPUT);
    pinMode(echopin2, INPUT);
     pinMode(trigpin3, OUTPUT);
    pinMode(echopin3, INPUT);
      pinMode(Green, OUTPUT);
            pinMode(Yellow, OUTPUT);
             pinMode(Red, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int dur,dist,dur2,dist2,dur3,dist3;
  digitalWrite(trigpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);                       // wait for a second
  digitalWrite(trigpin, LOW); 
  dur=pulseIn(echopin,HIGH);
  
  dist=(dur/2)/29.1;
  
  if(dist<=50 && dist>=0)
  {
    digitalWrite(Green, HIGH);
   // delay(60);
  }
  else
  {
    digitalWrite(Green, LOW);
    delay(60);
  }


  /////////////////////////2
  
   digitalWrite(trigpin2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);                       // wait for a second
  digitalWrite(trigpin2, LOW);
  
 dur2=pulseIn(echopin2,HIGH);
 dist2=(dur2/2)/29.1;
 if(dist2<=50 && dist2>=0)
  {
    digitalWrite(Yellow, HIGH);
   // delay(60);
  }
  else
  {
    digitalWrite(Yellow, LOW);
    delay(60);
  }
///////////////// 3

  digitalWrite(trigpin3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);                       // wait for a second
  digitalWrite(trigpin3, LOW); 
  dur3=pulseIn(echopin3,HIGH);
  
  dist3=(dur3/2)/29.1;
  
  if(dist3<=50 && dist3>=0)
  {
    digitalWrite(Red, HIGH);
   // delay(60);
  }
  else
  {
    digitalWrite(Red, LOW);
    delay(60);
  }
 

}

