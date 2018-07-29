#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define PIN2 5
#define PIN3 10

#define POWER 70
#define PIE 100
#define HALO 150


#define ThePies 4
#define USB 7
#define COMPUTER 8
#define ROUTER 6
#define SWITCH 6
#define SMILE 6
#define SURGE 5


#define delay_time 50

#define NUM_LEDS 42

#define BRIGHTNESS 100
#define HALO_BRIGHT 50
#define delayval 1000

bool start_up = true;

//const int power = 70;
//const int pie = 66;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(POWER, PIN, NEO_GRB);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(PIE, PIN2, NEO_GRB);
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(HALO, PIN3, NEO_GRB);
void setup() {
  strip.setBrightness(HALO_BRIGHT);
  strip2.setBrightness(BRIGHTNESS);
  strip3.setBrightness(HALO_BRIGHT);
  strip.begin();
  strip2.begin();
  strip3.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip2.show();
  strip3.show();


  for(int i = 0; i <= HALO; i++)
  {
    strip3.setPixelColor(i,255,255,255);
    
    strip3.show();
    delay(delay_time);

  }
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
//heart_beat();
//delay(500);
//blank();
  

  
  
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
      
  for (int i = 0; i <= SMILE; i++)
  {
 
    
    strip2.setPixelColor(i, 200, 20, 200);
    strip2.show();
    delay(delay_time);
    
  }
    
  for (int i = SMILE; i <= SMILE+SURGE; i++)
  {
    strip2.setPixelColor(i, 0,255,0);
    strip2.show();
    delay(delay_time);
  }
  for (int i = SMILE+SURGE; i <= SMILE+SURGE+USB; i++)
  {
    strip2.setPixelColor(i, 255,0,0);
    strip2.show();
    delay(delay_time);
  }


    for (int i = SMILE+SURGE+USB; i <= SMILE+SURGE+USB+COMPUTER; i++)
  {
    strip2.setPixelColor(i, 72, 66, 244);
    strip2.show();
    delay(delay_time);
  }

      for (int i = SMILE+SURGE+USB+COMPUTER; i <= SMILE+SURGE+USB+COMPUTER+ROUTER; i++)
  {
    strip2.setPixelColor(i, 142, 29, 173);
    strip2.show();
    delay(delay_time);
  }
      for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER; i <= SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH; i++)
  {
    strip2.setPixelColor(i, 229, 150,0 );
    strip2.show();
    delay(delay_time);
  }
      for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+ThePies; i++)
  {
    //Serial.println("yep");
     strip2.setPixelColor(i, 0, 29, 173);
     strip2.show();
     delay(delay_time);
  }
       for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+ThePies; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*2; i++)
  {
    //Serial.println("yep");
     strip2.setPixelColor(i, 255, 0, 100);
     strip2.show();
     delay(delay_time);
  }
       for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*2; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*3; i++)
  {
    
     strip2.setPixelColor(i, 112, 52, 109);
     strip2.show();
     delay(delay_time);
  }
         for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*3; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*4; i++)
  {
    
     strip2.setPixelColor(i, 6, 184, 229);
     strip2.show();
     delay(delay_time);
  }
          for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*4; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*5; i++)
  {
    
     strip2.setPixelColor(i, 181, 57, 92);
     strip2.show();
     delay(delay_time);
  }
         for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*5; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*6; i++)
  {
    
     strip2.setPixelColor(i, 214, 95, 40);
     strip2.show();
     delay(delay_time);
  }
         for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*6; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*7; i++)
  {
    
     strip2.setPixelColor(i, 206, 0, 226);
     strip2.show();
     delay(delay_time);
  }

         for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*7; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*8; i++)
  {
    
     strip2.setPixelColor(i, 226, 53, 47);
     strip2.show();
     delay(delay_time);
  }
         for (int i = SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*8; i < SMILE+SURGE+USB+COMPUTER+ROUTER+SWITCH+(ThePies)*9; i++)
  {
    
     strip2.setPixelColor(i, 255, 255, 255);
     strip2.show();
     delay(delay_time);
  }

 
  
}
void heart_beat()
{
      
  for (int i = 0; i <= SMILE; i++)
  {
    
    int red = 200;
    int green = 20;
    int blue = 200;
    
    strip2.setPixelColor(i, red/2, green/2, blue/2);
    strip2.show();
    //delay(delay_time);
    
    
  }
  delay(500);
   for (int i = 0; i <= SMILE; i++)
  {
    
    int red = 200;
    int green = 20;
    int blue = 200;
    
    strip2.setPixelColor(i, red/3, green/3, blue/3);
    strip2.show();
    //delay(delay_time);
    
    
  }
}




