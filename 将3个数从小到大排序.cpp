#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int x = a;
		a = b;
		b = x;
	}
	if (a < c)
	{
		int x = a;
		a = c;
		c = x;
	}
	if (b < c)
	{
		int x = b;
		b = c;
		c = x;
	}
	printf("%d>%d>%d", a, b, c);
	return 0;
}