#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int prime(int x)
{
	if (x == 2 || x == 3 || x == 5)
		return 1;
	else if (x > 5)
	{
		int y = 0;
		for (y = 3; y <= sqrt(x); y++)
		{
			if (x % y == 0)
				return 0;
		}
		if (y > sqrt(x))
			return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	printf("说明：输入数字可判断该数字是否为素数（输入0退出程序）\n");
	printf("请输入>:");
	scanf("%d", &i);
	while (i!=0)
	{
		if (prime(i) == 1)
		{
			printf("是素数\n");
		}
		else
			printf("不是素数\n");
		printf("请输入>:");
		scanf("%d", &i);
		int buffer;
		while ((buffer = getchar()) != '\n')
		{
			;
		}
	}
	return 0;
}