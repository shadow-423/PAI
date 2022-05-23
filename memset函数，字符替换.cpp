#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="hello world";
	memset(arr, '*',5);
	puts(arr);
	return 0;
}