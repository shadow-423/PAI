#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，你的电脑将在1分钟后关机，如果输入：“我是猪！！！”，就取消关机\n>:");
	int i = 0;
    do
	{
		i++;
		scanf("%s", input);
		if (strcmp(input, "我是猪！！！") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("你只有三次机会，");
		}
		if (i == 1)
		{
			printf("已经用掉一次，请重新输入：");
		}
		if (i == 2)
		{
			printf("已经用掉两次，这是最后一次：");
		}
		if (i == 3)
		{
			printf("给你机会你不中用！！！");
		}
	} while (i < 3);
	int a, b;
	for (a = 0; a < 20; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("猪逼  ");
		}
		printf("\n");
	}
	printf("程序将在3秒后关闭");
	Sleep (3000);
	return 0;
}