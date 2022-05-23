#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[]="abcdef";
//	int i = 0;
//	for (i = 0; i < (int)strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
int main()
{
	//int arr1[][] = { 1,2,3,4,5,6,7 };
	//int arr2[3][4] = { { 1,2,3 }, { 4,5 },{6,7,8,9 } };
	//char ch[6][5];
	int arr[3][4] = { {1,2,3,4},{5,6,7} };//行可省略，列不可省略；
	int x = 0, y = 0;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 4; y++)
		{
			printf("arr[%d][%d] = %p\n",x,y,&arr[x][y]);
		}
	}
	return 0;
}