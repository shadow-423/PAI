#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	short arr[10] = {0};
	int sz = 0;
	printf("%d\n", sizeof arr);
	sz=sizeof (arr) / sizeof (arr[0]);
	printf("%d\n", sz);
	return 0;

} 