#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ĵ���
int another(int x, int y) {//��Ҫ����ڣ��õ�main�����е�ֵ
	return(x + y);//��Ҫ������main��������ֵ��ͬ����������
}
int main(){
	int a = 0;
	int b = 0;
	scanf("%d\n%d", &a, &b);
	int sum;
	sum = another(a, b);
	printf("%d\n", sum);
	return 0;
}