#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int i;
	if (a > b)
	{
		i = a;
	}
	else
		i = b;
	while(i!=0)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			printf("%d ", i);
			break;
		}
		i--;
	}
	return 0;
}