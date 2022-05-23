#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Add(int* pnum)
{
	(* pnum)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num= %d\n", num);
	Add(&num);
	printf("num= %d\n", num);
	Add(&num);
	printf("num= %d\n", num);
	Add(&num);
	printf("num= %d\n", num);
	Add(&num);
	printf("num= %d\n", num);
	Add(&num);
	printf("num= %d\n", num);
	return 0;
}
//int main()
//{
//	printf("%d", printf("%d", printf("%s", 43)));//printf函数返回值为打印字符个数
//	return 0;
//}