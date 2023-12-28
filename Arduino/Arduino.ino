#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;

void setup() {
  Serial.begin(9600);  // 시리얼 통신 속도 설정
  motor1.attach(4);    // 모터 핀 번호 지정
  motor2.attach(6);
  motor3.attach(7);
  motor4.attach(12);
  motor5.attach(13);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();  // 시리얼 포트에서 명령 읽기
    Serial.println(command);
    if ( command == 'r' ){
      motor1.write(180);
      motor2.write(180);
      motor3.write(180);
      motor4.write(180);
      motor5.write(180);
       delay(1000);
    } else if ( command == 's') {
      motor1.write(-180);
      motor2.write(-180);
      motor3.write(180);
      motor4.write(180);
      motor5.write(180);
       delay(1000);
    } else if ( command == 'n') {
      motor1.write(180);
      motor2.write(-180);
      motor3.write(-180);
      motor4.write(180);
      motor5.write(180);
       delay(1000);
    } else if ( command == 'p') {
      motor1.write(-180);
      motor2.write(-180);
      motor3.write(-180);
      motor4.write(-180);
      motor5.write(-180);
       delay(1000);
  }
  }
}
