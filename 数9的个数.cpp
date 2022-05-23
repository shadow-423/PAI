#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	int x = a * 10 + b;
//	int count = 0;
//	for (a=0,b=0; a <= 9; a++)
//	{
//		for (b = 0; b <= 9; b++)
//		{
//			if (b == 9)
//			{
//				int x = a * 10 + b;
//				count++;
//				printf("%d ", x);
//			}
//			if (a == 9)
//			{
//				int x = a * 10 + b;
//				count++;
//				printf("%d ", x);
//			}
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
int main()
{
	int x = 0;
	int count = 0;
	for (x = 0; x <= 100; x++)
	{
		if (x % 10 == 9)
		{
			printf("%d ", x);
			count++;
		}
		if (x / 10 == 9)
		{
			printf("%d ", x);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}