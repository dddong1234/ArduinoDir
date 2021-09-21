void setup(){
  pinMode(?,?); // 버튼을 연결한 핀을 입력으로 설정
  Serial.begin(9600); // 시리얼 모니터를 9600의 속도로 활성화
}
void loop(){
  int button = ?(?); // button이라는 방에 버튼을 연결한 핀에서 들어오는 입력값을 저장
  Serial.println(?); // 시리얼 모니터에 button 값 출력
  ?(500); // 0.5초 기다린다.
}
