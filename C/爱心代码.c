/*
#include<stdio.h>
#include<Windows.h>
int main()
{
	system(" color 0c");//设计程序颜色 
	printf("遇见你是一件很开心的事情,爱你哟！！！\n");//打印文字 
	
	float x,y,a;//定义变量x,y,a 
	
	for(y=1.5f;y>-1;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=.05f){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<0.0f?'x':' ');
		}
		
		Sleep(150);//停顿函数（1.5秒钟） 
		putchar('\n'); //换行 
	}
	
	return 0;
}*/
 /*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
int main()
{
	float y;
	for ( y = 1.5f; y > -1.5f; y -= 0.1f) 
	{
		float x;
		for ( x = -1.5f; x < 1.5f; x += 0.05f) 
		{
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
		}
		putchar('\n');
	}
	for(;!kbhit();)    //kbhit()位于conio.h中，检测是否有键按下
	{
		char str[10];
		sprintf(str,"color %x",rand() % 16); //形成一条color X的字符串，注意要用%x
		system(str);
		sleep(0.5);
	}
    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>
 
float f(float x, float y, float z) {
float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
 
float h(float x, float z) {
	float y;
  for ( y = 1.0f; y >= 0.0f; y -= 0.001f)
if (f(x, y, z) <= 0.0f)
return y;
return 0.0f;
}
 
int main() {
HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
_TCHAR buffer[25][80] = { _T(' ') };
_TCHAR ramp[] = _T(".:-=+*#%@");
float t;
for ( t = 0.0f;; t += 0.1f) {
	int sy = 0;
	float s = sinf(t);
	float a = s * s * s * s * 0.2f;
	float z;
	for ( z = 1.3f; z > -1.2f; z -= 0.1f) {
	_TCHAR* p = &buffer[sy++][0];
	float tz = z * (1.2f - a);
	float x;
	for ( x = -1.5f; x < 1.5f; x += 0.05f) {
	float tx = x * (1.2f + a);
	float v = f(tx, 0.0f, tz);
	if (v <= 0.0f) {
	float y0 = h(tx, tz);
	float ny = 0.01f;
	float nx = h(tx + ny, tz) - y0;
	float nz = h(tx, tz + ny) - y0;
	float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
	float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
	*p++ = ramp[(int)(d * 5.0f)];
}
else
	*p++ = ' ';
}
}
 
	for (sy = 0; sy < 25; sy++) {
	COORD coord = { 0, sy };
	SetConsoleCursorPosition(o, coord);
	WriteConsole(o, buffer[sy], 79, NULL, 0);
}
Sleep(33);
}
}*/
