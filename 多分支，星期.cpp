#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int day = 0;
	//scanf("%d",&day);
	//if (1 == day)
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	//else if (4 == day)
	//	printf("星期四\n");
	////...
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		//printf("星期一\n");
		//break;
		if (day == 1)
			printf("呵呵\n");
	case 2:
		//printf("星期二\n");
		//break;
	case 3:
		//printf("星期三\n");
		//break;
	case 4:
		//printf("星期四\n");
		//break;
	case 5:
		printf("工作日\n");
		break;
	case 6:
		//printf("星期六\n");
		//break;
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}