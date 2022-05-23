#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float Fib( int i)
{
	if (i <= 2)
		return 1;
	else
		return Fib(i - 1) + Fib(i - 2);
}
int main()
{
	int n = 1;
	scanf("%d", &n);
	while (n != 0)
	{
		float ret = Fib(n);
		printf("%.0f\n", ret);
		scanf("%d", &n);
	}
	return 0;
}