#define _CRT_SECURE_NO_WARNINGS 
//转义字符，选择语句
#include <stdio.h>
int main() {
//转义字符
	   //三字符串型转义字符

	   //printf("(hello,is this your world??)\n");

	   //在ANSIC标准中？？）被解释为】
		//若我们想要？不被解释怎么办？利用转义字符\?即可解决问题
		printf("(hello,is this your world\??)\n");
	
		//简单的换行\n,回车\r ,\t水平制表符即tab，1tab=4space

		//printf("%c\n", ''');

		//若我要单独把这个’看成一个字符怎么办
		printf("%c\n", '\'');
		//利用\'这个转义字符即可，\'与\"作用基本相同

		//\xdd这转义字符则是16进制转为十进制后用ASCII表达出来
		printf("\x13\n");
		//\ddd这个转义字符则是8进制转为10进制后用ASCII表达出来
		printf("\24\n");

		//\a这种转义字符则是代表一种机器发出警报的震动

		//曾经出的测试题
		printf("c:\test\328\test.c\n");
		//问有几个字符
		//答：有14个字符
		//转义字符本质上也是一个字符
		//那为什么不是13呢
		//因为\ddd是一个8进制从0~7不包括8！！！！
//选择语句
		//if...else，switch
		printf("好好学习\n");
		printf("打不打代码（1/0）\n");
			int a=0 ;
			scanf("%d", &a);
				if (a == 1) {
					printf("拿到好offer\n");
				}
				else
				{
					printf("卖红薯\n");
				}
				
	return 0;
}