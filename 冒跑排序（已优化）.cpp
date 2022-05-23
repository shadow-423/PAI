#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	int n = 0;
	for (n = sz-1; n > 0; n--)
	{
		int flag = 1;
		for (i = 0; i + 1 < sz; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int x = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = x;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}