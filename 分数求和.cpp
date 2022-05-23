#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	double a = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += a/i;
		a = -a;
	}
	printf("%f", sum);
	return 0;
}