#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Fia(int i)
{
	double a = 1, b = 1;
	if (i <= 0)
		printf("请输入正确的数字\n");
	else if (i == 1 || i == 2)
		return 1;
	else
	{
		int n = 0;
		double num = 0;
		for(n = 3; n <= i; n++)
		{
			num = a + b;
			b = a;
			a = num;
		}
		return num;
	}
	return 0;
}
int main()
{
	int i=0;
	scanf("%d", &i);
	double sum = 0;
	sum = Fia(i);
	printf("%.0lf", sum);
}