#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//���빤�߿�

int main()
{
	//���ͱ���
	int a = 10;
	//�����ͱ���
	short b = 20;
	//�����ͱ���
	long c = 30;
	//�������ͱ���
	long long d = 40;

	printf("%d\n", a);
	
	//ռλ�� ��ʾ���һ������������
	printf("%hd\n", b);

	//ռλ�� ��ʾ���һ������������
	printf("%ld\n", c);

	//ռλ�� ��ʾ���һ��������������
	printf("%lld\n", d);

	//sizeof ���������������ڴ���ռ�õ��ֽ�(BYTE)��С
	//ʹ�÷�����sizeof���������ͣ� sizeof(������) ���� sizeof ������
	unsigned int len = sizeof(short);

	//printf("%d\n", len);
	printf("a�����ͳ���Ϊ��%d �ֽ�\n", sizeof(a));
	//4=32bit  1bit=0����1

	printf("b�Ķ����ͳ���Ϊ��%d �ֽ�\n", sizeof(b));
	//2

	printf("c�ĳ����γ���Ϊ��%d �ֽ�\n", sizeof(c));
	//4

	printf("d�ĳ������γ���Ϊ��%d �ֽ�\n", sizeof(d));
	//8

	return EXIT_SUCCESS;
}
