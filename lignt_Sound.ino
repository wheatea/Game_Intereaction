#include <Adafruit_NeoPixel.h>  //调用LED彩灯的库文件

Adafruit_NeoPixel ColorLED = Adafruit_NeoPixel(1, 6, NEO_GRB + NEO_KHZ800);
//定义彩灯引脚以及数量


int Lightstate=0; //定义一个整数变量state
int Soundstate=0;
void setup()
{
  ColorLED.begin();
  pinMode(A0, INPUT); //设置光敏传感器引脚为输入状态
  pinMode(A2, INPUT);
  Serial.begin(9600); //设置串口波特率为9600
}
void loop()
{
  Lightstate = analogRead(A0);
  Soundstate = analogRead(A2);
  Serial.print("Lightstate:");
  Serial.println(Lightstate);
  Serial.print("Soundstate:");
  Serial.println(Soundstate);
  
  if (Lightstate < 50) { //当state的值小于50时，亮红灯
    if(Soundstate>80)
    {
    ColorLED.setPixelColor(0, ColorLED.Color(255, 255, 255));  //设置彩灯颜色为红色
    ColorLED.show();  //显示彩灯效果
    delay(2500);
    }
    ColorLED.setPixelColor(0, ColorLED.Color(0, 0, 0));
    ColorLED.show(); 
  } 
}
