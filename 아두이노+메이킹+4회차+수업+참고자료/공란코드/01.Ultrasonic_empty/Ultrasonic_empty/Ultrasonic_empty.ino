int trig = 3;  // trig라는 이름을 가진 정수형 변수에 초음파 센서 trig를 연결한 핀번호 저장
int echo = 2;  // echo라는 이름을 가진 정수형 변수에 초음파 센서 echo를 연결한 핀번호 저장
#include <Adafruit_NeoPixel.h>

#define PIN 13 
#define NUMPIXELS 12

Adafruit_NeoPixel neopixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(echo, INPUT); // 핀모드를 echo(2번핀) 입력으로 설정
  pinMode(trig , OUTPUT);// 핀모드를 trig(3번핀) 출력으로 설정
  pinMode(PIN, OUTPUT);
  Serial.begin(9600); // 시리얼통신을 9600의 속도로 시작한다.
  neopixels.begin();
  
}

void loop() {
  // trig 0V 출력
  digitalWrite(trig,LOW);
  delayMicroseconds(2); // 2마이크로초를 기다린다.
  digitalWrite(trig,HIGH);// trig 5V 출력
  delayMicroseconds(10); // 10마이크로초를 기다린다.
  digitalWrite(trig,LOW);// trig 0V 출력

 int val = pulseIn(echo,HIGH)*340/2/10000 ; // val라는 이름을 가진 정수형 변수에 거리 구하는 공식(거리=시간*속도)을 저장한다.

  Serial.print(val); // 시리얼 모니터에 val값 출력
  Serial.println("cm"); // 시리얼 모니터에 "cm"를 출력하고 줄바꿈한다.
  delay(100); // 0.1초 기다린다.

  if(val < 20)
  { neopixels.setBrightness(30);
  }

  else
  
  {
    
   
   for (int i = 30; i>=0; i=i-1)
   {
    int val2  = pulseIn(echo,HIGH)*340/2/10000 ;
    
    digitalWrite(trig,LOW);
    delayMicroseconds(2); // 2마이크로초를 기다린다.
    digitalWrite(trig,HIGH);// trig 5V 출력
    delayMicroseconds(10); // 10마이크로초를 기다린다.
    digitalWrite(trig,LOW);// trig 0V 출력
    if(val2 < 20)
    { 
     neopixels.setBrightness(30);
      }
    
    
    neopixels.setBrightness(i);
    delay(1000);
    Serial.println(i);
   }  
  }
  TOTAL_SET_COLOR(12,255,255,255);
 
  
}


void TOTAL_SET_COLOR(int PIX_NUM,int red,int green, int blue)
{
  for(int i = 0; i<PIX_NUM ; i++)
  {
    neopixels.setPixelColor(i,red,green,blue);
    neopixels.show();   
  }
}
