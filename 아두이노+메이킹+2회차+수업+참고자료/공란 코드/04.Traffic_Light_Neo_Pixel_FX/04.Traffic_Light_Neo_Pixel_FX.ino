#include <Adafruit_NeoPixel.h> //네오픽셀 라이브러리를 실행한다.

int PIN = 13; // PIN이라는 이름을 가진 int(정수형) 변수에 13을 저장한다.
int NUMPIXELS = 12; // NUMPIXELS이라는 이름을 가진 int(정수형) 변수에 12을 저장한다.
int SET_BRIGHTNESS = 30; // SET_BRIGHTNESS이라는 이름을 가진 int(정수형) 변수에 30을 저장한다.
Adafruit_NeoPixel neopixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // 네오픽셀의 이름을 neopixels 선언하고 연결핀과 네오픽셀 수량 설정

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,OUTPUT); // PIN 핀을 출력모드로 설정한다.
  neopixels.begin(); // 네오픽셀을 시작한다.
  neopixels.setBrightness(SET_BRIGHTENESS); // 네오픽셀의 밝기를 SET_BRIGHTENESS로 설정한다.
}

void loop() {
  // 함수를 사용해서 12개의 네오픽셀을 0,255,0값으로 동작한다.
  //5초기다린다
  // 함수를 사용해서 12개의 네오픽셀을 255,255,0값으로 동작한다.
  //5초기다린다
  // 함수를 사용해서 12개의 네오픽셀을 255,0,0값으로 동작한다.
  //5초기다린다
  
}

*// 네오픽셀의 갯수와 r,g,b값을 입력하면 입력한 네오픽셀의 갯수만큼 r,g,b값을 입력하고 네오픽셀을 동작시키는 함수*
 void ?(?,?,?,?)// TOTAL_SET_COLOR라는 이름을 가지고 int PIX_NUM, int red, int green, int blue 값을 받는 함수를 만든다.
{
    // 초기값: i = 0 ; 조건값 : i가 PIX_NUM보다 작다면 ; 증감값 : i를 1씩증가신킨다.
  {
     // 네오픽셀의 i위치의 r,g,b색을 red, green, blue값으로 입력한다.
     // 네오픽셀을 동작한다.
  }
}
