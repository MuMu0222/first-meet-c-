#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//scanf和getchar
int main()
{
	/*
	int ch = getchar();
	
	//put与get一起用且类型定义用int类型

	//因为在头文件中getchar的读取错误类型

	//用的是#define EOF （-1）

	//规定了错误类型，适用类型也就为int类型

	//MSDN(MICOSOF DEV NETWORK)微软提供的发展network可查各种代码！

	printf("%c\n", ch);
	putchar(ch);
	*/



/*	
int ch = 0;
		while ((ch = getchar()) != EOF) 

			//为什么输出结果自动换行呢？

		//因为在输出缓冲区中我们输入了a后面是都自带\n

		{
			putchar(ch);
		}
*/
	 char pwd[20] = { 0 };
	printf("请输入密码-》");
	scanf("%s", pwd);
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}//利用循环清除了输出缓冲区的所有\n字符
//即使打空格也无法在变为第二个的输入内容
	printf("请确认秘密（Y/N）：");
		int ret = getchar();
	if ('Y' == ret) {
		printf("输入正确\n");
	}
	else {
		printf("输入错误\n");
	}
	//结果为什么直接帮我们输出了错误呢
	//因为scanf是不在缓冲区拿走\n
	//而后面的getchar则是把剩下都拿走
	//所以第二次自动输入的是\n答案即为错误
	//在scanf输入空格一样不被读取
	//彻底解决就需要用到getchar的清除缓存区方法
	return 0;
}