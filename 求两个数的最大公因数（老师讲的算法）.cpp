#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 0;
	while (x = a % b)
	{
		a = b;
		b = x;
	}
	printf("%d\n", b);
	return 0;
}
