#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//switch Ð¡Á·Ï°
int main()
{
int n = 1;
int m = 2;
switch (n) 
{
case 1:
	m++;
case 2:
	n++;
		switch (n) {
			//switch ¿ÉÇ¶Ì×
		case 2:
			m++, n++;
				break;
		}
	case 3:
		m++;
		printf("%d\n %d\n", m, n);
		break;
}
return 0;
}