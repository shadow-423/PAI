#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
	struct Book
	{
		char name[20];
		short price;
	};
int main()
{
	//struct Book b1 = { "C���Գ������",55 };
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("���ۺ�ļ۸�:%dԪ\n", b1.price);
    struct Book b1 = { "C���Գ������\n",55 };
	b1.price = 20;
	strcpy(b1.name, "C++");
	struct Book* pb = &b1;
	printf("%s\n", pb->name);//printf("%s\n", (*pb).name);
	printf("%d\n", pb->price);//printf("%d\n", (*pb).price);
	// .   �ṹ����� . ��Ա
	// ->  �ṹ��ָ�� ->��Ա
	return 0;
}