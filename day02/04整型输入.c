#define _CRT_SECURE_NO_WARNINGS
///第一种处理程序警告：如果已知会出现的警告会导致程序执行失败，但期望继续执行程序，则可以在首行定义忽略掉该类型警告，此种忽略需在首行设置。
#include <stdio.h>
//#pragma warning(disable:4996)
//第二种处理程序警告：已知导致程序中止的警告编号为4996（通过调式在输出中获得），此种忽略可在程序任意位置设置。

int main01(void)
{
	int a;

	//通过键盘输入赋值
	//&运算符，表示取地址运算符
	scanf("%d", &a);

	printf("%d\n", a);
	return 0;
}