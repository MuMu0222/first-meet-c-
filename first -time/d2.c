#define _CRT_NOT_SECURE_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main() {
	char arr1[] = { "abcdef" };// ��7���ַ�0-a,1-b,2-c,3-d,4-e,5-f,6-/0
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//������һ��һ���ַ�������ᵼ����/0�����޷�ֹͣ��������̵ķ���ֱ���ҵ�/0
	//���Կ��Զ�ӡ�/0������ֹͣ
	printf("%s\n,%s\n", arr1, arr2);
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);//�������ַ���������//������ڶ����ַ��������쳣����Ϊ�ַ�����һ��ǰ����пռ������δ�ҵ�/0
	//���һֱ�����Ǹ�����
	printf("%d\n,%d\n", len1, len2);
}