#include <Adafruit_NeoPixel.h> //네오픽셀 라이브러리를 실행한다.

int PIN = 13; // PIN이라는 이름을 가진 int(정수형) 변수에 13을 저장한다.
int NUMPIXELS = 12; // NUMPIXELS이라는 이름을 가진 int(정수형) 변수에 12을 저장한다.
int SET_BRIGHTNESS = 100; // SET_BRIGHTNESS이라는 이름을 가진 int(정수형) 변수에 30을 저장한다.
Adafruit_NeoPixel neopixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // 네오픽셀의 이름을 neopixels 선언하고 연결핀과 네오픽셀 수량 설정

// mode라는 이름을 가진 정수형(int) 변수에 0값을 저장한다.

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,OUTPUT); // PIN 핀을 출력모드로 설정한다.
  neopixels.begin(); // 네오픽셀을 시작한다.
  neopixels.setBrightness(SET_BRIGHTNESS); // 네오픽셀의 밝기를 SET_BRIGHTENESS로 설정한다.
  
  // 버튼을 연결한 핀을 풀업저항(PULLUP)을 사용하는 입력모드로 설정한다.
}


void loop() {
  // mode라는 이름을 가진 정수형(int) 변수에 버튼을 연결한 핀의 입력값 저장한다.
  // 만약 버튼이 눌렸다면
  {
    delay(300); // 0.3초 기다린다.
    // mode값을 1증가시킨다.
    // 만약 mode값이 4라면
    {
      // mode에 0을 저장한다.
    }
  }
  
  // 만약 mode의 값이 0이라면
  {
    //함수를 사용해서 12개의 네오픽셀을 255,0,0값으로 동작한다.
  }
  // 만약 mode의 값이 1이라면
  {
    //함수를 사용해서 12개의 네오픽셀을 0,255,0값으로 동작한다.
  }
  // 만약 mode의 값이 2이라면
  {
    //함수를 사용해서 12개의 네오픽셀을 0,0,255값으로 동작한다.
  }
  // 만약 mode의 값이 3이라면
  {
    //함수를 사용해서 12개의 네오픽셀을 255,255,255값으로 동작한다.
  }
}

// 네오픽셀의 갯수와 r,g,b값을 입력하면 입력한 네오픽셀의 갯수만큼 r,g,b값을 입력하고 네오픽셀을 동작시키는 함수*
void TOTAL_SET_COLOR(int PIX_NUM, int red, int green, int blue)// TOTAL_SET_COLOR라는 이름을 가지고 int PIX_NUM, int red, int green, int blue 값을 받는 함수를 만든다.
{
  for(int i = 0; i<PIX_NUM ; i++)  // 초기값: i = 0 ; 조건값 : i가 PIX_NUM보다 작다면 ; 증감값 : i를 1씩증가신킨다.
  {
    neopixels.setPixelColor(i,red,green,blue); // 네오픽셀의 i위치의 r,g,b색을 red, green, blue값으로 입력한다.
    neopixels.show();   // 네오픽셀을 동작한다.
  }
}
