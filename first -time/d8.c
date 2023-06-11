#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//分支语句与循环语句
//switch语句(分支语句)
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		//为什么每个语句都需要放入一个break呢
		//与if语句同if语句只执行后面紧跟的一条语句
		//case 却一直往下执行,
		// 例：我输入3，却会出现周三周四周五周六周日
		// 但是我每个case中加入break就不会出现此问题
		// 有好处也有坏处
		//直到有break
	case 1:
		printf("周一");
		break;
	case 2:
		printf("周二");
		break;
	case 3:
		printf("周三");
		break;
	case 4:
		printf("周四");
		break;
	case 5:
		printf("周五");
		break;
	case 6:
		printf("周六");
		break;
	case 7:
		printf("周日");
		break;
	default:
		printf("输入错误了哦！");
	}
	return 0;
	
}