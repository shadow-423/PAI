#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float x, y;
	printf("请输入一个数：>");
	scanf("%f", &x);
	if (x < 0)
		printf("y=-1");
	else if (x == 0)
		printf("y=0");
	else
		printf("y=1");
	return 0;
}