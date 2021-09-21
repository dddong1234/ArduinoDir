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
  for (?;?;?) // 초기값: i = 0 ; 조건값 : i가 12보다 작다면 ; 증감값 : i를 1씩증가신킨다.
  {
    // 네오픽셀의 위치별 색 값을 초록색으로 입력한다.
    // 네오픽셀을 동작한다.
  }
  delay(5000); //5초기다린다
  for (?;?;?) // 초기값: i = 0 ; 조건값 : i가 12보다 작다면 ; 증감값 : i를 1씩증가신킨다.
  {
    // 네오픽셀의 위치별 색 값을 노란색으로 입력한다.
    // 네오픽셀을 동작한다.
  }
  delay(5000); //5초기다린다
  for (?;?;?) // 초기값: i = 0 ; 조건값 : i가 12보다 작다면 ; 증감값 : i를 1씩증가신킨다.
  {
    // 네오픽셀의 위치별 색 값을 빨간색으로 입력한다.
    // 네오픽셀을 동작한다.
  }
  delay(5000); //5초기다린다
}
