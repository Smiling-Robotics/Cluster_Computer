#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define PIN2 5
#define POWER 70
#define PIE 100
#define ThePies 4

#define USB 7
#define COMPUTER 8
#define ROUTER 6
#define SWITCH 6



#define delay_time 50

#define NUM_LEDS 42

#define BRIGHTNESS 100

#define delayval 1000

bool start_up = true;

//const int power = 70;
//const int pie = 66;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(POWER, PIN, NEO_GRB);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(PIE, PIN2, NEO_GRB);
void setup() {
  strip.setBrightness(BRIGHTNESS);
  strip2.setBrightness(BRIGHTNESS);
  strip.begin();
  strip2.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip2.show();
  
  
  Serial.begin(9600);
  
}

void loop() {

while (start_up)
{
  
second_strips();
start_up = false;
}




set_strip();
//delay(1000);
pulse_strip();
delay(500);
blank();
  

  
  
  //delay(500);
  
  
   /* for(int i = 0; i <= POWER; i++)
  {
    strip.setPixelColor(i,0,0,0);
    strip.show();
    delay(50);
    if ( i == 35)
    {
      for(int i = 0; i <= POWER/2; i++)
      {
        strip.setPixelColor(i,0,255,0);
    
        strip.show();
        delay(50);
      }
      }
  }
*/
}

void set_strip()
{
  
  for(int i = 0; i <= 30; i++)
  {
    strip.setPixelColor(i,0,255,0);
    
    strip.show();
    delay(delay_time);

  }
}
void pulse_strip()
{
  int x = 0;
  for(int i = 30; i <= POWER; i++)
  {
    
    strip.setPixelColor(i,0,255,0);
    strip.setPixelColor(x,0,0,0);
    strip.show();
    x+=1;
    //Serial.println(x);
    delay(delay_time);
    if (i == 70)
    {
      for (int x = 40; x <= POWER; x++)
      {
        
        Serial.println(x);
        strip.setPixelColor(x,0,0,0);
        strip.show();
        delay(delay_time);
      }
    }
  }
}
void blank(){
  for(int i = 0; i <= POWER; i++)
  {
    strip.setPixelColor(i,0,0,0);
    strip.show();
  }
}

void second_strips()
{
  for (int i = 0; i <= USB; i++)
  {
    strip2.setPixelColor(i, 255,0,0);
    strip2.show();
    delay(delay_time);
  }
    for (int i = USB; i <= USB+COMPUTER; i++)
  {
    strip2.setPixelColor(i, 72, 66, 244);
    strip2.show();
    delay(delay_time);
  }

      for (int i = USB+COMPUTER; i <= USB+COMPUTER+ROUTER; i++)
  {
    strip2.setPixelColor(i, 142, 29, 173);
    strip2.show();
    delay(delay_time);
  }
      for (int i = USB+COMPUTER+ROUTER; i <= USB+COMPUTER+ROUTER+SWITCH; i++)
  {
    strip2.setPixelColor(i, 229, 150,0 );
    strip2.show();
    delay(delay_time);
  }
      for (int i = USB+COMPUTER+ROUTER+SWITCH; i < USB+COMPUTER+ROUTER+SWITCH+ThePies; i++)
  {
    //Serial.println("yep");
     strip2.setPixelColor(i, 0, 29, 173);
     strip2.show();
     delay(delay_time);
  }
       for (int i = USB+COMPUTER+ROUTER+SWITCH+ThePies; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*2; i++)
  {
    //Serial.println("yep");
     strip2.setPixelColor(i, 255, 0, 100);
     strip2.show();
     delay(delay_time);
  }
       for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*2; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*3; i++)
  {
    
     strip2.setPixelColor(i, 112, 52, 109);
     strip2.show();
     delay(delay_time);
  }
         for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*3; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*4; i++)
  {
    
     strip2.setPixelColor(i, 6, 184, 229);
     strip2.show();
     delay(delay_time);
  }
          for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*4; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*5; i++)
  {
    
     strip2.setPixelColor(i, 181, 57, 92);
     strip2.show();
     delay(delay_time);
  }
         for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*5; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*6; i++)
  {
    
     strip2.setPixelColor(i, 214, 95, 40);
     strip2.show();
     delay(delay_time);
  }
         for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*6; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*7; i++)
  {
    
     strip2.setPixelColor(i, 206, 0, 226);
     strip2.show();
     delay(delay_time);
  }

         for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*7; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*8; i++)
  {
    
     strip2.setPixelColor(i, 226, 53, 47);
     strip2.show();
     delay(delay_time);
  }
         for (int i = USB+COMPUTER+ROUTER+SWITCH+(ThePies)*8; i < USB+COMPUTER+ROUTER+SWITCH+(ThePies)*9; i++)
  {
    
     strip2.setPixelColor(i, 255, 255, 255);
     strip2.show();
     delay(delay_time);
  }
  
}




