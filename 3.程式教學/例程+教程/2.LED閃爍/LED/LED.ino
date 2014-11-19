//2014.3.13
int LED = 10;//定义数字接口10,对应
void setup() 
{
  pinMode(LED,OUTPUT);//设置数字10 口为输出接口，Arduino 上我们用到的I/O 口都要进行类似这样的定义。
}

void loop() //死循环体
{
 digitalWrite(LED,HIGH);//IO口10设置为高电平，点亮数字10 口LED
 delay(500);//延时500MS
 digitalWrite(LED,LOW);//IO口10设置为低电平，熄灭数字10 口LED
 delay(500);//延时500MS
}
