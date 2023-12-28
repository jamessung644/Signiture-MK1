
#include <HuemonelabKit.h>

Bluetooth bluetooth(2, 3);            
ServoMotor motor1;
ServoMotor motor2;
ServoMotor motor3;
ServoMotor motor4;
ServoMotor motor5;

Stepper stepper(8,9,10,11);
Lcd lcd(0x27);

void setup() {
  Serial.begin(9600);
  stepper.setSpeed(18);

  bluetooth.begin(9600); 
  motor1.attach(4);
  motor2.attach(6);
  motor3.attach(7);  
  motor4.attach(12);  
  motor5.attach(13);    

  lcd.begin(); // clear, init, backlight, setCursor(0,0)
  lcd.setCursor(0,0); // 열(0 - 위, 1 - 아래), 행(1 ~ 16)
  lcd.print("command");  
  lcd.setCursor(1,0);
  lcd.print(">");
}

void loop() {
  if( bluetooth.available() ){
    char text = bluetooth.read();
    if ( text == 'r' ){
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("rock");
      motor2.write(0);
      motor3.write(0);
      motor4.write(0);
      motor5.write(0);
      delay(500);
      motor1.write(0);
       delay(1000);
    } else if ( text == 's') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("scissors");
      motor1.write(10);
      delay(100);
      motor2.write(180);
      motor3.write(180);
      motor4.write(0);
      motor5.write(0);
      delay(500);
      motor1.write(0);
       delay(1000);
    } else if ( text == 'n') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("scissors");
      motor2.write(180);
      motor3.write(180);
      motor4.write(0);
      motor5.write(0);
      delay(500);
      motor1.write(0);
       delay(1000);
    } else if ( text == 'p') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("paper");
      motor2.write(180);
      motor3.write(180);
      motor4.write(180);
      motor5.write(180);
      delay(500);
      motor1.write(180);
       delay(1000);
    } else if ( text == 'b') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("best");
      motor2.write(0);
      motor3.write(0);
      motor4.write(0);
      motor5.write(0);
      delay(500);
      motor1.write(180);
       delay(1000);
    } else if ( text == 'u') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("arm up");
      stepper.move(-300);
       delay(3000);
    } else if ( text == 'd') {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("arm down");
      stepper.move(600);
       delay(3000);
    } else if ( text == 'x' ) {
      lcd.setCursor(1,2);
      lcd.print("        ");
      lcd.setCursor(1,2);
      lcd.print("exit");
      motor2.write(0);
      motor3.write(0);
      motor4.write(0);
      motor5.write(0);
      delay(500);
      motor1.write(0);
       delay(1000);
    }
  }

  else if (Serial.available() > 0) {
    char command = Serial.read();  // 시리얼 포트에서 명령 읽기
    Serial.println(command);
    if ( command == 'r' ){
      motor1.write(0);
      motor2.write(0);
      motor3.write(0);
      motor4.write(0);
      motor5.write(0);
       delay(1000);
    } else if ( command == 's') {
      motor1.write(0);
      motor2.write(180);
      motor3.write(180);
      motor4.write(0);
      motor5.write(0);
       delay(1000);
    } else if ( command == 'p') {
      motor1.write(180);
      motor2.write(180);
      motor3.write(180);
      motor4.write(180);
      motor5.write(180);
       delay(1000);
  }
  }
}

