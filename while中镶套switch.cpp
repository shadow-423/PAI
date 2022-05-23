#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	printf("请输入数字1：");
	scanf("%d", &i);
		while (i != 1)
		{
				switch (i)
				{
				case 2:
				case 3:
				case 4:
				case 5:
				default:
					printf("请重新输入:\n");
					break;
				}
				scanf("%d", &i);
		}
		printf("结束\n");
	return 0;
}