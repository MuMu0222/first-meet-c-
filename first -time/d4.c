#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ѭ����������
int main(){
	//ѭ�����while ,do..while,for..else
	int codeline = 0;
	while (codeline<2000)
	{ 
		printf("д���룺%d\n", codeline);
		codeline++;
	}
	if (codeline >= 2000) {
		printf("�õ���offer\n");
	}
	else
	{
		printf("��������\n");
	}
	//����
	int arr[] = { 1,0,3,4,5,6,8,9,10 };//arr[�������ִ洢�����Զ��������Լ����볣��]
	//{}���ڼ�����е�������Ŵ�0��ʼ
	//�������ȫ��������ô�죿
	int i = 0;
		while (i <= 8) { //Ҫ������ŵĶ������������еı��ʽ��i��ֵ
			printf("%d\n", arr[i]);
			i++;
	}
}