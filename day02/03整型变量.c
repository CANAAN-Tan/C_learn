#include<stdio.h>

int main01(void)
{
	//数据类型，标识符 = 值
	//无符号 unsigned , 有符号 signed (可以省略)
	// signed int a = -10;

	unsigned int a = -10;
	//%u 占位符表示输出一个无符号十进制整型数据
	//printf("%u\n", a);
	printf("%d\n", a);
	return 0;
}

int main(void)
{
	//进制
	//二进制0-1，八进制0-7，十六进制0-9 10-15（a-f）

	//int a = 10;
	//printf("%d\n", a);
	////占位符 %x 输出一个十六进制整型
	//printf("%x\n", a);
	//printf("%X\n", a);
	////占位符 %o 输出一个八进制整型
	//printf("%o\n", a);

	//定义八进制数据，以0开头
	int a = 0123;
	//定义十六进制数据，以0x开头
	int b = 0x123;
	//在计算机定义数据时，不可以直接定义二进制数据
	printf("%d\n", a);
	printf("%o\n", a);
	printf("%x\n", a);

	printf("%d\n", b);
	printf("%o\n", b);
	printf("%x\n", b);

	return 0;
}