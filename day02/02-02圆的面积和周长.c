#include<stdio.h>
//1、在宏定义中定义常量PI
#define pi 3.14159
//圆的面积 s = pi * r * r
//圆的周长 l = 2 * r * pi

int main(void)
{
	//2、在程序中定义常量PI
	//const float pi = 3.14159;

	//在定义局部变量可以在数据类型前加修饰auto，也可以不加
	auto float r = 3.4;

	float s = pi * r * r;
	float l = 2 * r * pi;

	//占位符 %f 表示输出一个浮点型float,默认保留六位小数,可在占位符指定保留几位小数%.2则保留四舍五入的两位小数。
	printf("圆的面积：%.2f\n", s);
	printf("圆的周长：%.2f\n", l);

	//标识符：
	//1.不能使用系统关键字
	//2.允许使用字母数字和下划线
	//3.不允许数组开头
	//4.标识符区分大小写
	//5.见名知意，使用驼峰式命名
	return 0;
}