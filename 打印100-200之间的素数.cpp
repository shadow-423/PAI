#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	int x = 0;
	for (i = 101; i <= 200; i+=2)
	{
        if (i % 3 != 0 && i % 5 != 0)
		{
			for (x = 2; x <= sqrt(i); x++)
			{
				if (i % x == 0)
					break;
			}
			if (x > sqrt(i))
			{
				printf("%d ", i);
				count++;
			}
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}