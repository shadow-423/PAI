#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=1;
	while (year != 0)
	{
		printf("������Ҫ�жϵ����(����0��������):>");
		scanf("%d", &year);
		if (year % 400 == 0 || year % 4 == 0)
			printf("����Ϊ����\n");
		else
			printf("���겻������\n");
	}
	return 0;
}