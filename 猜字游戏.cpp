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
	//���������,��ʱ����������������
	int ret = 0;
    ret=rand()%100+1;
	printf("���һ��1-100֮�������(��0����):");
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
			printf("���ַ�Χ��1-100֮�䣺");
		}
		else if (guess > ret)
		{
			printf("�´��ˣ�");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�");
		}
		else
		{
			printf("�¶��ˣ�");
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
		printf("��ѡ��>:");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}