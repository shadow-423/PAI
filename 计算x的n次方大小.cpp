#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x,i=0;
	scanf("%d", &x);
	double z = 1;
	while (i<x)
	{
		z = z * 2;
		i++;
	}
	printf("z=%.0f\n", z);
	return 0;
}
