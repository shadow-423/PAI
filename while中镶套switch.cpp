#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	printf("����������1��");
	scanf("%d", &i);
		while (i != 1)
		{
				switch (i)
				{
				case 2:
				case 3:
				case 4:
				case 5:
				default:
					printf("����������:\n");
					break;
				}
				scanf("%d", &i);
		}
		printf("����\n");
	return 0;
}