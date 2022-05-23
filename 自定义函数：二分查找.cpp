#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
		}
		else 
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x=0 ;
	printf("请输入一个1-10之间的数字>:");
	scanf("%d", &x);
	/*int ret = binary_search(arr, x); ______arr传递的是数组首元素的地址*/
	int ret = binary_search(arr , x, sz);
	if (ret == -1)
	{
		printf("找不到。\n");
	}
	else
		printf("找到了，下标是%d\n", ret);
}