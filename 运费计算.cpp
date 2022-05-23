#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float a,b,c;
	printf("请输入距离：>");
	scanf("%f", &a);
	printf("请输入每公里单价：>");
	scanf("%f", &b);
	int i = 0;
	switch (i)
	{
	case 1:
		if (a >= 500 && a < 1000)
			c = a * b * (1 - 0.02);
		break;
	case 2:
		if (a >= 1000 && a < 2000)
			c = a * b * (1 - 0.05);
		break;
	case 3:
		if (a >= 2000 && a < 4000)
			c = a * b * (1 - 0.08);
		break;
	case 4:
		if (a >= 4000)
			c = a * b * (1 - 0.12);
		break;
	case 5:
		if (a >= 0 && a < 500)
			c = a * b;
		break;
	}
		printf("价格为：%.2f", c);
	return 0;
}