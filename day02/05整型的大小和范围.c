#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//导入工具库

int main()
{
	//整型变量
	int a = 10;
	//短整型变量
	short b = 20;
	//长整型变量
	long c = 30;
	//长长整型变量
	long long d = 40;

	printf("%d\n", a);
	
	//占位符 表示输出一个短整型数据
	printf("%hd\n", b);

	//占位符 表示输出一个长整型数据
	printf("%ld\n", c);

	//占位符 表示输出一个长长整型数据
	printf("%lld\n", d);

	//sizeof 计算数据类型在内存中占用的字节(BYTE)大小
	//使用方法：sizeof（数据类型） sizeof(变量名) 或者 sizeof 变量名
	unsigned int len = sizeof(short);

	//printf("%d\n", len);
	printf("a的整型长度为：%d 字节\n", sizeof(a));
	//4=32bit  1bit=0或者1

	printf("b的短整型长度为：%d 字节\n", sizeof(b));
	//2

	printf("c的长整形长度为：%d 字节\n", sizeof(c));
	//4

	printf("d的长长整形长度为：%d 字节\n", sizeof(d));
	//8

	return EXIT_SUCCESS;
}
