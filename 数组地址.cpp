#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof����������-�����������������飬sizeof���������������������������Ĵ�С����λ���ֽ�
	//2.&����������������ʾ�������飬&������ȥ��������������ĵ�ַ��
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}