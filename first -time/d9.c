#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//分支语句与循环语句
//switch语句简便的应用（分支语句）
int main ()
{
	//当多条件都为一答案时可省略大部分步骤
    //体现case好处
	int day = 0;
	scanf("%d", &day);
	switch (day) 
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日");
			break;
		case 6:
		case 7:
			printf("休息日");
		default:
			printf("你打错了，一周没有这一天哦");
	}
	return 0;
}