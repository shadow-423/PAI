#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d,%d\n", i, j);
		}
	}
	/*for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("%d,%d\n", i, j);
		}
	}*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++ )
	{
		printf("%d ", arr[i]);
	}*/
	//int i = 0;
	/*for(i=1;i<=10;i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}*/
	/*while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i); i++;
	}*/
	return 0;
}