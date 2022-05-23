#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial(int n)
{
	if (n == 1)
		return 1;
	else if (n < 1)
		return 0;
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	int i = 1;
	while (i != 0)
	{
		scanf("%d", &i);
		int num;
		num = factorial(i);
		printf("%d\n", num);
	}
	return 0;
}