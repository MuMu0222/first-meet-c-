#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��֧�����ѭ�����
//switch������Ӧ�ã���֧��䣩
int main ()
{
	//����������Ϊһ��ʱ��ʡ�Դ󲿷ֲ���
    //����case�ô�
	int day = 0;
	scanf("%d", &day);
	switch (day) 
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������");
			break;
		case 6:
		case 7:
			printf("��Ϣ��");
		default:
			printf("�����ˣ�һ��û����һ��Ŷ");
	}
	return 0;
}