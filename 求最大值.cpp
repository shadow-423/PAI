#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 132,12441,2,32,0,123,1444,2,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int MAX = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > arr[MAX])
		{
			MAX = i;
		}
	}
	printf("%d", arr[MAX]);
	return 0;
}