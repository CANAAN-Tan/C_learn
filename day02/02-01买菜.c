#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//�ƹ�3Ԫ / �����5��
	//���� �ڳ������й����У���ֵ���ܷ����ı��������Ϊ����
	const int price = 3;
	//price = 5;//err
	//���� �ڳ������й����У���ֵ���Է����ı��������Ϊ����
	/*int weight = 5;*/
	int weight;
	printf("�����빺�������\n");
	scanf("%d", &weight);
	

	int sum = price * weight;
	printf("%d\n", sum);
	return 0;
}