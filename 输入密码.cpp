#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N����>");
	ret = getchar();
	if (ret == 'Y'|'y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}