#define _CRT_NOT_SECURE_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main() {
	char arr1[] = { "abcdef" };// 共7个字符0-a,1-b,2-c,3-d,4-e,5-f,6-/0
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//若单独一个一个字符输入则会导致无/0出现无法停止会出烫烫烫的符号直到找到/0
	//所以可以多加’/0‘让他停止
	printf("%s\n,%s\n", arr1, arr2);
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);//用来求字符串的数量//求出来第二个字符串数量异常是因为字符串是一个前后均有空间的类型未找到/0
	//则会一直数到那个长度
	printf("%d\n,%d\n", len1, len2);
}