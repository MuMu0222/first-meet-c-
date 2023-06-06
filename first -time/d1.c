#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum Color {
	RED,//0
	BLUE,//1
	GREEN//2
	//只需要用，隔开无需最后打分号远远比#define ... 提前定义简单许多
};//extern int a在调用其他c语言文件的a变量
#define Max "abc"
int main(){
	/*extern int s 调用此文件下别的c语言的s变量的值*/
	 const int a = 0;//用了const型常量后续无法改变a变量的值，但在字符串类型中的arr [不能用const定义的常量] 
	int b = 1;
	enum Color s = RED;
	scanf("%d %d", &a, &b);//scan_f 是此编译器独有的解决不安全问题的形式，别的编译器不适用 _CRT...此功能符合ANSIC
	int sum = a + b;
	printf("%d\n", sum);
	printf("%d\n", s);
	printf("%s\n", Max);
	printf("%zu\n", sizeof(char));//sizeof 用%zu
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(float));
	return 0;
}