#include <Adafruit_NeoPixel.h> //네오픽셀 라이브러리를 실행한다.

int PIN = 13; // PIN이라는 이름을 가진 int(정수형) 변수에 13을 저장한다.
int NUMPIXELS = 12; // NUMPIXELS이라는 이름을 가진 int(정수형) 변수에 12을 저장한다.
int SET_BRIGHTNESS = 100; // SET_BRIGHTNESS이라는 이름을 가진 int(정수형) 변수에 30을 저장한다.
Adafruit_NeoPixel neopixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // 네오픽셀의 이름을 neopixels 선언하고 연결핀과 네오픽셀 수량 설정

int trig = 3; // trig라는 이름을 가진 정수형 변수에 초음파 센서 trig를 연결한 핀번호 저장
int echo = 2; // echo라는 이름을 가진 정수형 변수에 초음파 센서 echo를 연결한 핀번호 저장

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN,OUTPUT); // PIN 핀을 출력모드로 설정한다.
  neopixels.begin(); // 네오픽셀을 시작한다.
  neopixels.setBrightness(SET_BRIGHTNESS); // 네오픽셀의 밝기를 SET_BRIGHTENESS로 설정한다.

  pinMode(2,INPUT);// 핀모드를 echo(2번핀) 입력으로 설정
  pinMode(3,OUTPUT);// 핀모드를 trig(3번핀) 출력으로 설정
  Serial.begin(9600); // 시리얼통신을 9600의 속도로 시작한다.
}


void loop() {

  digitalWrite(trig,LOW); // trig 0V 출력
  delayMicroseconds(2); // 2마이크로초를 기다린다.
  digitalWrite(trig,HIGH); // trig 5V 출력
  delayMicroseconds(10); // 10마이크로초를 기다린다.
  digitalWrite(trig,LOW); // trig 0V 출력

  int val = (pulseIn(echo,HIGH)*340)/2/10000; // val라는 이름을 가진 정수형 변수에 거리 구하는 공식(거리=시간*속도)을 저장한다.

  Serial.print(val); // 시리얼 모니터에 val값 출력
  Serial.println("cm"); // 시리얼 모니터에 "cm"를 출력하고 줄바꿈한다.

  // 만약 val값이 5미만이라면 TOTAL_SET_COLOR함수를 사용하여 보라색을 킨다. 
  //위의 조건이 아니고 만약 val값이 10미만이라면 TOTAL_SET_COLOR함수를 사용하여 노란색을 킨다.
  //위의 조건이 아니고 만약 val값이 15미만이라면 TOTAL_SET_COLOR함수를 사용하여 청록색을 킨다.
  // 위의 조건이 아니라면 TOTAL_SET_COLOR함수를 사용하여 흰색을 킨다.
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
