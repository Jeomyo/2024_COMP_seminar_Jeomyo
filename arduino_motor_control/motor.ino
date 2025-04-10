int IN1Pin = 2; 
int IN2Pin = 3; //2,3번 핀은 좌측 모터를 제어하는 핀
int IN3Pin = 4;
int IN4Pin = 5; //4,5번 핀은 우측 모터를 제어하는 핀

int ENAPin = 10;
int ENBPin = 11;

int incomingByte;  // 시리얼 통신을 통해 받은 데이터 저장 배열

void setup() {
  Serial.begin(9600);   // 시리얼 통신 속도 설정
  pinMode(IN1Pin, OUTPUT);
  pinMode(IN2Pin, OUTPUT);
  pinMode(IN3Pin, OUTPUT);
  pinMode(IN4Pin, OUTPUT);
  analogWrite(ENAPin, 0);
  analogWrite(ENBPin, 0);
  
}

void driveForward() {
  analogWrite(ENAPin, 255);
  analogWrite(ENBPin, 255);
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, HIGH);
}

void turnLeft() {
  stopMotors();
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH);
  delay(700);
  stopMotors();
}

void turnRight() {
  stopMotors();
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, HIGH);
  delay(700);
  stopMotors();
}

void SlowForward() {
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, HIGH);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, HIGH);
  analogWrite(ENAPin, 150);
  analogWrite(ENBPin, 150);
}

void stopMotors() {
  digitalWrite(IN1Pin, LOW);
  digitalWrite(IN2Pin, LOW);
  digitalWrite(IN3Pin, LOW);
  digitalWrite(IN4Pin, LOW);
  
}

void startMotors(){
  driveForward();
}

void loop() {
  
  
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    
    if (incomingByte == 'S') {
      stopMotors();
    } else if (incomingByte == 'Y') {
      SlowForward();
    } else if (incomingByte == 'G') {
      driveForward();
    } else if (incomingByte == 'R') {
      turnRight();
      startMotors();
    } else if (incomingByte == 'L') {
      turnLeft();
      startMotors();
  }
}
}
