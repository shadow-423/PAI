#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
    char latter[100] = {0};
	printf("ÇëÊäÈë×ÖÄ¸£¨ÊäÈëEsc½áÊø£©:>");
	scanf("%s", latter);
	while(strcmp(latter, "Esc"))
	{
		for (i = 0; i <= 100; i++)
		{
			if (latter[i] >= 'A' && latter[i] <= 'Z')
			{
				latter[i] = latter[i] + 32;
				printf("%c", latter[i]);
			}
		}
		printf("\n");
		printf("ÇëÊäÈë×ÖÄ¸£¨ÊäÈëEsc½áÊø£©:>");
		scanf("%s", latter);
	}
	return 0;
}