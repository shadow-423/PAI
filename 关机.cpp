#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺������������������ȡ���ػ�\n>:");
	int i = 0;
    do
	{
		i++;
		scanf("%s", input);
		if (strcmp(input, "����������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("��ֻ�����λ��ᣬ");
		}
		if (i == 1)
		{
			printf("�Ѿ��õ�һ�Σ����������룺");
		}
		if (i == 2)
		{
			printf("�Ѿ��õ����Σ��������һ�Σ�");
		}
		if (i == 3)
		{
			printf("��������㲻���ã�����");
		}
	} while (i < 3);
	int a, b;
	for (a = 0; a < 20; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("���  ");
		}
		printf("\n");
	}
	printf("������3���ر�");
	Sleep (3000);
	return 0;
}