#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int input=1;
	int num = 1;
	printf("����������ѧ��ú�ѧϰ����(1/0):");
	scanf("%d", &input);

	while (input != 1)
	{
		printf("�ؼ��ֵأ�%d\n", num);
		num++;
		scanf("%d", &input);
	}
	if (input = 1);
	printf("��offer\n");
	return 0;
}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line > 20000);
//	printf("��offer\n");
//		return 0;
//}