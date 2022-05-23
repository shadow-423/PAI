#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("     ");
	for (b = 1; b <= 9; b++)
	{
		printf("%7d", b);
	}
	for (a = 1, b = 1; a <= 9; a++)
	{
		printf("\n\n%7d  ", a);
		for (b = 1; b <= 9; b++)
	 	{
			int x = a * b;
			printf("%d*%d=%-2d ",a,b,x);
	    }
	}
	return 0;
}