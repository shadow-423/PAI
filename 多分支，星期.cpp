#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int day = 0;
	//scanf("%d",&day);
	//if (1 == day)
	//	printf("����һ\n");
	//else if (2 == day)
	//	printf("���ڶ�\n");
	//else if (3 == day)
	//	printf("������\n");
	//else if (4 == day)
	//	printf("������\n");
	////...
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		//printf("����һ\n");
		//break;
		if (day == 1)
			printf("�Ǻ�\n");
	case 2:
		//printf("���ڶ�\n");
		//break;
	case 3:
		//printf("������\n");
		//break;
	case 4:
		//printf("������\n");
		//break;
	case 5:
		printf("������\n");
		break;
	case 6:
		//printf("������\n");
		//break;
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}