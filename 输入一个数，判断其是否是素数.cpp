#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int prime(int x)
{
	if (x == 2 || x == 3 || x == 5)
		return 1;
	else if (x > 5)
	{
		int y = 0;
		for (y = 3; y <= sqrt(x); y++)
		{
			if (x % y == 0)
				return 0;
		}
		if (y > sqrt(x))
			return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	printf("˵�����������ֿ��жϸ������Ƿ�Ϊ����������0�˳�����\n");
	printf("������>:");
	scanf("%d", &i);
	while (i!=0)
	{
		if (prime(i) == 1)
		{
			printf("������\n");
		}
		else
			printf("��������\n");
		printf("������>:");
		scanf("%d", &i);
		int buffer;
		while ((buffer = getchar()) != '\n')
		{
			;
		}
	}
	return 0;
}