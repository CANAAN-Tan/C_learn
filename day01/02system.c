#include <stdlib.h>
#include<stdio.h>

int main(void)
{
	//����ʹ��Windows��cmd�����Windows�Դ�����calc ������ nodepad ���±� mspaint ��ͼ��
	//Ҳ���Դ�һ���ⲿ��Ӧ�ó��������·��������Ҫ����˫б��  ����ʹ��һ����б��
	//system("D:\\Desktop\\feiq.exe")
	int value;
	value = system("calc"); 
	//%d��һ��ռλ������ʾ���һ����������
	printf("%d\n", value);
	return 0;
}