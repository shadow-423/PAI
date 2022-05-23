#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char a = 3;
	char b = 126;
	char c = a + b;
	printf("%d\n", b);
	printf("%d\n", c);
	c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	return 0;
}