#include<stdio.h>
//Բ����� s = pi * r * r
//Բ���ܳ� l = 2 * r * pi

int main(void)
{
	//����PI
	const float pi = 3.14159;

	float r = 2;

	float s = pi * r * r;
	float l = 2 * r * pi;

	//ռλ�� %f ��ʾ���һ��������float
	printf("Բ�������%f", s);
	printf("Բ���ܳ���%f", l);

	return 0;
}