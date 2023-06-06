#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数的调用
int another(int x, int y) {//需要加入口，得到main函数中的值
	return(x + y);//需要返回与main函数定义值的同样数据类型
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