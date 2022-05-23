#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	short a = 0;
//	int b = 20;
//	printf("%d\n", sizeof(a = b + 5));
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	int a = 11;
	a= a | (1 << 2);
	printf("%d\n", a);
	a = a & (~(1 << 2));
	printf("%d\n", a);
	return 0;
}