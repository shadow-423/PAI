#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>;
//暴力求解：
//int main()
//{
//	int arr[] = { 1,2,3,5,1,2,3,4,5,354,2,44,56,34,45,44 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if(arr[i]==arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("只出现一次的是：%d\n", arr[i]);
//		}
//	}
//	return 0;
//}
// 异或暴力求解：
//int main()
//{
//	int arr[] = { 1,2,3,5,1,2,3,4,5,354,2,44,56,34,45,44 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if(i == j)
//			{
//				continue;
//			}
//			if ((arr[i] ^ arr[j])==0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("只出现一次的是：%d\n", arr[i]);
//		}
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,5,1,2,3,4,5 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("只出现一次的是：%d\n", ret);
	return 0;
}
//001 010
//-011   011
//-000   101
//-101   001
//-100   010
//-110   011 
//-101   100
//-001   101
//-100