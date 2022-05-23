#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0;
	double b = 1;
	double a = 1;
	int i = 1;
	while (fabs(a) >= 1e-6)
	{
		x = x +a;
		b = b + 2;
		i = -i;
		a = i/ b;
	}
	x = x* 4;
	printf("¦°=%f", x);
	return 0;
}