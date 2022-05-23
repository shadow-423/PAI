#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int input=1;
	int num = 1;
	printf("来陕西理工大学后好好学习了吗(1/0):");
	scanf("%d", &input);

	while (input != 1)
	{
		printf("回家种地：%d\n", num);
		num++;
		scanf("%d", &input);
	}
	if (input = 1);
	printf("好offer\n");
	return 0;
}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line > 20000);
//	printf("好offer\n");
//		return 0;
//}