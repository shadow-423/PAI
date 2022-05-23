#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = --a;//a++先使用在赋值，++a先赋值在使用；
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int MAX = 0;
//  
// MAX=(a>b?a:b);
//	/*if (a > b)
//		MAX = a;
//	else
//		MAX = b;*/
//	printf("%d\n", MAX);
//	return 0;
//}
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	extern int g_val;
//	printf("g_val=%d", g_val);
//	return 0;
//}
#include<stdio.h>
extern int Add(int, int);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}