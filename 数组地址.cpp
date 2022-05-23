#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof（数组名）-数组名表述整个数组，sizeof（数组名）计算的是整个个数组的大小，单位是字节
	//2.&数组名，数组名表示整个数组，&数组名去除的是整个数组的地址；
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}