#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum Color {
	RED,//0
	BLUE,//1
	GREEN//2
	//ֻ��Ҫ�ã�������������ֺ�ԶԶ��#define ... ��ǰ��������
};//extern int a�ڵ�������c�����ļ���a����
#define Max "abc"
int main(){
	/*extern int s ���ô��ļ��±��c���Ե�s������ֵ*/
	 const int a = 0;//����const�ͳ��������޷��ı�a������ֵ�������ַ��������е�arr [������const����ĳ���] 
	int b = 1;
	enum Color s = RED;
	scanf("%d %d", &a, &b);//scan_f �Ǵ˱��������еĽ������ȫ�������ʽ����ı����������� _CRT...�˹��ܷ���ANSIC
	int sum = a + b;
	printf("%d\n", sum);
	printf("%d\n", s);
	printf("%s\n", Max);
	printf("%zu\n", sizeof(char));//sizeof ��%zu
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(float));
	return 0;
}