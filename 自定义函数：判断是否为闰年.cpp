#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int x)
{
	if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year=1;
	while (year != 0)
	{
		scanf("%d", &year);
		if (is_leap_year(year) == 1)
		{
			printf("����������\n");
		}
		else
		{
			printf("���겻������\n");
		}
	}
	return 0;
}