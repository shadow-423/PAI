#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[10][10] = { 0 };
	int x = 0, y = 0;
	printf("%s %u %c\n", arr[x - 1][y], arr[x - 1][y - 1], arr[x][y - 1]);
	printf("%s %u %c\n", arr[11][10], arr[11][11], arr[10][11]);
	int a = '0';
	a = a - '0';
	printf("%d", a );
	return 0;
}