#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//�߼����һ��Ϊ�٣���߲��ټ���
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
	i = a++ || ++c || d++;//�߼����һ��Ϊ�棬��߲��ټ���
	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
	return 0;
}