#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//分支语句与循环语句
//if语句简单(分支语句)
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("青少年");
	//若要写成18《=age《28
	//程序会将其分成两端即age《=18若失败
	//则变成0<28,被离本身表达式的意思
	else if (age >= 18 && age < 28)
		printf("青年");
	else if (age >= 28 && age < 40)
		printf("壮年");
	else if (age >= 40 && age < 60)
		printf("中年");
	else if (age >= 60 && age < 80)
		printf("老年");
	else
		printf("老寿星");
	return 0;

}