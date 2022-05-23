#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
	{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	printf("sum=%d\n", sum);
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	sum = Add(2, 3);
	printf("sum=%d\n", sum);
	return 0;
	}
