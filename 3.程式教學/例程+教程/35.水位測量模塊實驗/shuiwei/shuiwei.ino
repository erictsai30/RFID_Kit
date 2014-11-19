int sensorPin = A0;    // 设置模拟口A0为信号输入端
int ledPin = 13;      // 设置LED控制引脚为13
int sensorValue = 0;  // 存放模拟信号量的变量

void setup() {
  pinMode(ledPin, OUTPUT);  //设置LED对应的引脚为输出
  Serial.begin(9600);     //初始化串口波特率9600
}

void loop() {
  sensorValue = analogRead(sensorPin);
  
  if(sensorValue>700)//当读取的值大于700时，点亮LED
  {
   digitalWrite(ledPin, HIGH);
  }else
  {
   digitalWrite(ledPin, LOW);
  }
  Serial.println(sensorValue);
  delay(100);
}
