#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��֧�����ѭ�����
//if����(��֧���)
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("������");
	//��Ҫд��18��=age��28
	//����Ὣ��ֳ����˼�age��=18��ʧ��
	//����0<28,���뱾����ʽ����˼
	else if (age >= 18 && age < 28)
		printf("����");
	else if (age >= 28 && age < 40)
		printf("׳��");
	else if (age >= 40 && age < 60)
		printf("����");
	else if (age >= 60 && age < 80)
		printf("����");
	else
		printf("������");
	return 0;

}