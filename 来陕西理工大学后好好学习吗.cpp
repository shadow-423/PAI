#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char input = 1;
	int buffer;
	int num = 1;

	printf("来陕西理工大学后好好学习了吗(1.好好学习/2.打游戏/3.谈对象/4.打枪/5.上课摸鱼):");
	scanf_s("%c", &input);
	//while (1)
	//{
	//	if ((input <= '9') && (input >= '0')) break;
	//	else {
	//		printf("error:intput number!");
	//		scanf_s("%c", &input);
	//	}
	//}
	while (input != '1')
	{
		printf("回家种地：%d \n", num);
		num++;
		scanf_s("%c", &input);
		while ((buffer = getchar()) != '\n')
		{
			;
		}
	}
	printf("好offer\n");
	return 0;
}