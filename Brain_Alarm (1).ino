#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
  bool rightbutton = false;
 
}

void loop() {
  while(CircuitPlayground.slideSwitch() == true){ //if slide switch is on the left it will start and turn off if it is on right
    int result = tiltYX(0,0,600);  //Calls the motion function 
  } 
  int rightbutton = CircuitPlayground.rightButton(); //If slide switch is on the right, it will play Hush Little Baby when left button is pressed
  int ms = 600;
  if(rightbutton == true){
         delay(1000);
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(261,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(392,ms );
         CircuitPlayground.playTone(392,ms );
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(261,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(293,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(493,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(440,ms );
         CircuitPlayground.playTone(392,ms );
         CircuitPlayground.playTone(392,ms );
         
  }
}
bool tiltYX(int y,int x,int ms){  //Declaring variables 
  y = CircuitPlayground.motionY();
     if(y > 9 || y < -9){                           //Alert for leaning fowards and backwards
           CircuitPlayground.playTone(440,ms );
           CircuitPlayground.playTone(493,ms );     //Plays these annoying tones on repeat 
     }
  x = CircuitPlayground.motionX();
      if(x > 7 || x < -7){                          //Alert for leaning left and right 
           CircuitPlayground.playTone(440,ms );
           CircuitPlayground.playTone(493,ms );
      }
     //Serial.println(x);
     //Serial.println(y);
}
