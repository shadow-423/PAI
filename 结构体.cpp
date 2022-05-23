#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct stu s1 = { "xzzz",20,"2110098054" };
	printf("%s\n%d\n%s\n", s1.name,s1.age,s1.id);
	struct stu* ps = &s1;
	printf("\n%s\n", (*ps).name);
	printf("\n%s\n", ps->name);
	return 0;
}