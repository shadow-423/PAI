#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=1;
	while (year != 0)
	{
		printf("请输入要判断的年份(输入0结束程序):>");
		scanf("%d", &year);
		if (year % 400 == 0 || year % 4 == 0)
			printf("该年为闰年\n");
		else
			printf("该年不是闰年\n");
	}
	return 0;
}