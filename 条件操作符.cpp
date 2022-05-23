#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}*/
//	b = (a > 5 ? 3 : -3);
//	printf("%d", b);
//	return 0;
//}
int main()
{
	int a = 10, b = 20;
	int max = 0;
	max = (a > b ? a : b);
	printf("%d\n", max);
	return 0;
}