#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��֧�����ѭ�����
//switch���(��֧���)
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		//Ϊʲôÿ����䶼��Ҫ����һ��break��
		//��if���ͬif���ִֻ�к��������һ�����
		//case ȴһֱ����ִ��,
		// ����������3��ȴ�������������������������
		// ������ÿ��case�м���break�Ͳ�����ִ�����
		// �кô�Ҳ�л���
		//ֱ����break
	case 1:
		printf("��һ");
		break;
	case 2:
		printf("�ܶ�");
		break;
	case 3:
		printf("����");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("����");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("����");
		break;
	default:
		printf("���������Ŷ��");
	}
	return 0;
	
}