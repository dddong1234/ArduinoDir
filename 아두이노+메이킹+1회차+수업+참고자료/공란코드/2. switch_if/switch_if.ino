int red = ?; // red라는 이름을 가진 int 크기의 방에 빨간색 LED를 연결한 핀번호를 저장한다.
int green = ?; // green라는 이름을 가진 int 크기의 방에 초록색 LED를 연결한 핀번호를 저장한다.

void setup() {
  pinMode(?,OUTPUT); //빨간색 LED를 연결한 핀을 출력으로 설정한다.
  pinMode(?,OUTPUT); //초록색 LED를 연결한 핀을 출력으로 설정한다.
}

void loop() {
  int state = ?(?); // state라는 이름을 가진 int 크기의 방에 스위치를 연결한 핀의 입력값을 저장한다.
  
  ?(state ==0) // 만약에 state값이 0과 같다면
  {
    digitalWrite(?,HIGH); // 빨간색 LED가 연결된 핀을 킨다.
    digitalWrite(?,LOW); // 초록색 LED가 연결된 핀을 끈다.
  }
  ? // 위의 조건이 아니라면
  {
    digitalWrite(?,HIGH); // 초록색 LED가 연결된 핀을 킨다.
    digitalWrite(?,LOW); // 빨간색 LED가 연결된 핀을 킨다.
  }

}
