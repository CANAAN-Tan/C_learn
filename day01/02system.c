#include <stdlib.h>
#include<stdio.h>

int main(void)
{
	//可以使用Windows的cmd命令打开Windows自带程序：calc 计算器 nodepad 记事本 mspaint 画图板
	//也可以打开一个外部的应用程序，如果带路径，则需要带上双斜杠  或者使用一个正斜杠
	//system("D:\\Desktop\\feiq.exe")
	int value;
	value = system("calc"); 
	//%d是一个占位符，表示输出一个整型数据
	printf("%d\n", value);
	return 0;
}