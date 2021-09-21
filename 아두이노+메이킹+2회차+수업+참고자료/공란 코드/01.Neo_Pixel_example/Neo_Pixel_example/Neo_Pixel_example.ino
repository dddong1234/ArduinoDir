#include <Adafruit_NeoPixel.h>

#define PIN 13 // 디지털핀 어디에 연결했는지 입력(디지털 13번)
#define NUMPIXELS 12 // 연결된 네오픽셀 수량
#define SET_BRIGHTNESS 30 // 네오픽셀 밝기
Adafruit_NeoPixel neopixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // neopixels이라는 네오픽셀을 선언하고 연결핀과 네오픽셀 수량 설정

void setup() {

  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
  neopixels.begin();
  neopixels.setBrightness(SET_BRIGHTNESS);
}
void loop() {
    
    
    for(int i=0; i<12; i++)
    {
      SET_COLOR(i,255,0,0);
      delay(100);
    }
    for(int i=0; i<12; i++)
    {
      SET_COLOR(i,0,255,0);
      delay(100);
    }
    for(int i=0; i<12; i++)
    {
      SET_COLOR(i,0,0,255);
      delay(100);
    }
    for(int i=0; i<12; i++)
    {
      SET_COLOR(i,255,255,255);
      delay(100);
    }   
}


void TOTAL_SET_COLOR(int PIX_NUM,int red,int green, int blue)
{
  for(int i = 0; i<PIX_NUM ; i++)
  {
    neopixels.setPixelColor(i,red,green,blue);
    neopixels.show();   
  }
}

void SET_COLOR(int PIX_NUM,int red,int green, int blue)
{
    neopixels.setPixelColor(PIX_NUM,red,green,blue);
    neopixels.show();   
}
