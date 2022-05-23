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
	//struct Book b1 = { "C语言程序设计",55 };
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("打折后的价格:%d元\n", b1.price);
    struct Book b1 = { "C语言程序设计\n",55 };
	b1.price = 20;
	strcpy(b1.name, "C++");
	struct Book* pb = &b1;
	printf("%s\n", pb->name);//printf("%s\n", (*pb).name);
	printf("%d\n", pb->price);//printf("%d\n", (*pb).price);
	// .   结构体变量 . 成员
	// ->  结构体指针 ->成员
	return 0;
}