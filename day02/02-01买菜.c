#include<stdio.h>

int main(void)
{
	//黄瓜3元 / 斤，购买5斤
	//常量 在程序运行过程中，其值不能发生改变的量，称为常量
	const int price = 3;
	//price = 5;//err
	//变量 在程序运行过程中，其值可以发生改变的量，称为变量
	int weight = 5;

	int sum = price * weight;
	printf("%d\n", sum);
	return 0;
}