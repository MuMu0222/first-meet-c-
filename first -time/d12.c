#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char ch;
	while ((ch = getchar()) != EOF)
    {
		//用字符的0和9 即ASCII码中连续的数字
		//若输入大于9的ASCII值则无法输出
		//若输入小于0的ASCII值则无法输出
		//运行到continue时则跳回之前的步骤（continue特点）
	if (ch < '0' || ch>'9') 
		continue;
		putchar(ch);
	//达到只输出数字的目的
     }
	return 0;
}