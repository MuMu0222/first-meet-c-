#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//scanf��getchar
int main()
{
	/*
	int ch = getchar();
	
	//put��getһ���������Ͷ�����int����

	//��Ϊ��ͷ�ļ���getchar�Ķ�ȡ��������

	//�õ���#define EOF ��-1��

	//�涨�˴������ͣ���������Ҳ��Ϊint����

	//MSDN(MICOSOF DEV NETWORK)΢���ṩ�ķ�չnetwork�ɲ���ִ��룡

	printf("%c\n", ch);
	putchar(ch);
	*/



/*	
int ch = 0;
		while ((ch = getchar()) != EOF) 

			//Ϊʲô�������Զ������أ�

		//��Ϊ�����������������������a�����Ƕ��Դ�\n

		{
			putchar(ch);
		}
*/
	 char pwd[20] = { 0 };
	printf("����������-��");
	scanf("%s", pwd);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}//����ѭ����������������������\n�ַ�
//��ʹ��ո�Ҳ�޷��ڱ�Ϊ�ڶ�������������
	printf("��ȷ�����ܣ�Y/N����");
		int ret = getchar();
	if ('Y' == ret) {
		printf("������ȷ\n");
	}
	else {
		printf("�������\n");
	}
	//���Ϊʲôֱ�Ӱ���������˴�����
	//��Ϊscanf�ǲ��ڻ���������\n
	//�������getchar���ǰ�ʣ�¶�����
	//���Եڶ����Զ��������\n�𰸼�Ϊ����
	//��scanf����ո�һ��������ȡ
	//���׽������Ҫ�õ�getchar���������������
	return 0;
}