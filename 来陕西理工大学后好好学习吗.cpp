#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char input = 1;
	int buffer;
	int num = 1;

	printf("����������ѧ��ú�ѧϰ����(1.�ú�ѧϰ/2.����Ϸ/3.̸����/4.��ǹ/5.�Ͽ�����):");
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
		printf("�ؼ��ֵأ�%d \n", num);
		num++;
		scanf_s("%c", &input);
		while ((buffer = getchar()) != '\n')
		{
			;
		}
	}
	printf("��offer\n");
	return 0;
}