#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************************************************\n");
	printf("*****************      1.Play       0.Exit      *****************\n");
	printf("*****************************************************************\n");
}
void game()
{
	//生成随机数,用时间来设置随机数起点
	int ret = 0;
    ret=rand()%100+1;
	printf("请猜一个1-100之间的数字(按0返回):");
	while (1)
	{
		int guess = 101;
		scanf("%d", &guess);
		int buffer;
		while ((buffer = getchar()) != '\n')
		{
			;
		}
		if (guess == 0)
		{
			menu();
			break;
		}
		if (guess > 100||guess<0)
		{
			printf("数字范围在1-100之间：");
		}
		else if (guess > ret)
		{
			printf("猜大了：");
		}
		else if (guess < ret)
		{
			printf("猜小了：");
		}
		else
		{
			printf("猜对了：");
			menu();
			break;
		}
	}
}
int main()
{
	int input = 2;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择>:");
		scanf("%d", &input);
		int buffer;
		while ((buffer = getchar()) != '\n')
		{
			;
		}
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}