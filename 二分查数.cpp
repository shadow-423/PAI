#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 4;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	while (left <= right)
	{
		int i = (left + right) / 2;
		if (x > arr[i])
		{
			left = i + 1;
		}
		else if (x < arr[i])
		{
			right = i - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", i);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}