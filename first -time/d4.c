#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//循环语句和数组
int main(){
	//循环语句while ,do..while,for..else
	int codeline = 0;
	while (codeline<2000)
	{ 
		printf("写代码：%d\n", codeline);
		codeline++;
	}
	if (codeline >= 2000) {
		printf("拿到好offer\n");
	}
	else
	{
		printf("继续加油\n");
	}
	//数组
	int arr[] = { 1,0,3,4,5,6,8,9,10 };//arr[根据数字存储多少自动，或者自己输入常数]
	//{}中在计算机有单独的序号从0开始
	//若想输出全部数组怎么办？
	int i = 0;
		while (i <= 8) { //要根据序号的多少来定括号中的表达式和i的值
			printf("%d\n", arr[i]);
			i++;
	}
}