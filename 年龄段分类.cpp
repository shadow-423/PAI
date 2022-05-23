#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age=100;
	if (age < 18)
		printf("未成年\n");
	else
	{
		if (age >= 18 && age < 28)
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50 && age < 90)
			printf("老年\n");
		else
			printf("长寿\n");
	}
		return 0;
}