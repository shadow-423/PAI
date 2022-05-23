#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[10] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//if (password == "123456");//等号不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
		if (i == 1)
			printf("您已经输入密码错误两次，再输入一次密码错误程序将会退出。\n");
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}