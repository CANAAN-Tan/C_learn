#include<stdio.h>
//圆的面积 s = pi * r * r
//圆的周长 l = 2 * r * pi

int main(void)
{
	//常量PI
	const float pi = 3.14159;

	float r = 2;

	float s = pi * r * r;
	float l = 2 * r * pi;

	//占位符 %f 表示输出一个浮点型float
	printf("圆的面积：%f", s);
	printf("圆的周长：%f", l);

	return 0;
}