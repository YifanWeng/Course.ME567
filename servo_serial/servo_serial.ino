#include <Servo.h> 
String comdata = "";
int16_t numdata[6] = {0}, PWMPin[6] = {3, 5, 6, 9, 10, 11}, mark = 0;
Servo s[6];
void setup()
{
for(int i = 0; i < 6; i++) s[i].attach(PWMPin[i]);
Serial.begin(9600);
}
void loop()
{
for(int i = 0; i < 5; i++)
{
  numdata[i] = 90;
}
//不断循环检测串口缓存，一个个读入字符串，
while (Serial.available() > 0)
{
   numdata[5]=Serial.read();
   
   Serial.println(numdata[5]);
}

for(int i = 0; i < 6; i++)
{
//Serial.print("Pin ");
//Serial.print(PWMPin[i]);
//Serial.print(" = ");
Serial.println(numdata[i]);
s[i].write(numdata[i]);
}
//输出之后必须将读到数据的mark置0，不置0下次循环就不能使用了。
mark = 0;

}

