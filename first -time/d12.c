#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char ch;
	while ((ch = getchar()) != EOF)
    {
		//���ַ���0��9 ��ASCII��������������
		//���������9��ASCIIֵ���޷����
		//������С��0��ASCIIֵ���޷����
		//���е�continueʱ������֮ǰ�Ĳ��裨continue�ص㣩
	if (ch < '0' || ch>'9') 
		continue;
		putchar(ch);
	//�ﵽֻ������ֵ�Ŀ��
     }
	return 0;
}