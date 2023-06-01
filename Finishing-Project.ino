#include<Wire.h>
#include<ezButton.h>
#include <Adafruit_NeoPixel.h>
#include<LiquidCrystal_I2C.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
//omer were here 
#define BTN_PIN 2
#define STCK_X_PIN A0
#define STCK_Y_PIN A1

ezButton butt(BTN_PIN);
Adafruit_NeoPixel neoPixel(16,4,NEO_GRB + NEO_KHZ800);
LiquidCrystal_I2C lcd(0x28,16,2);

int stickX;
int stickY;



void setup()
{
	/*neoPixel.begin();
    neoPixel.clear();
    for(int pixel = 0; pixel < 16; pixel++){
        neoPixel.setPixelColor(pixel, neoPixel.ColorHSV(pixel*5461,255,255-pixel));
        neoPixel.show();
        delay(250);
    }*/

}

void loop()
{
	
}
