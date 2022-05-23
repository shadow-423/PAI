#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b, c;
	printf("please enter three number:>");
	scanf("%f%f%f", &a,&b,&c);
	if (a > b && a > c)
	{
		if (b > c)
		{
			printf("%f>%f>%f", a, b, c);
		}
		else
		{
			printf("%f>%f>%f", a, c, b);
		}
		}
	else if (b > a && b > c)
	{
		if (a > c)
		{
			printf("%f>%f>%f", b, a, c);
		}
		else
		{
			printf("%f>%f>%f", b, c, a);
		}
	}
	else
	{
		if (a > b)
		{
			printf("%f>%f>%f", c, a, b);
		}
		else
		{
			printf("%f>%f>%f", c, b, a);
		}
	}
	return 0;
}