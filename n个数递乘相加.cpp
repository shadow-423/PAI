#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	double ret = 1;
	int n = 0;
	double sum = 0;
	scanf("%d", &n);
	for (sum=0; n > 0; n--)
	{
		i = n;
		for (ret=1; i > 0; i--)
		{
			ret = ret * i;
		}
		printf("%.0f\n", ret);
		sum = sum + ret;
	}
	printf("！！！！！！>>>%.0f", sum);
	return 0;
}