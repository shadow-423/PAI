#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不能完成任务
// 当实参传给形参时，形参其实是实参的一份临时拷贝，对形参的修改是不会改变实参的；
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d,b=%d\n", a, b);
	Swap2(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//  printf("%d\n",a);
//	return 0;
//}