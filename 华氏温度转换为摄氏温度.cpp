#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float F;
	printf("Please enter a Fahrenheit temperature:>");
	scanf("%f", &F);
	while (F < -459.67)
	{
		printf("Please enter a Fahrenheit temperature that is not less than absolute zero (-495.67¨H):>");
		scanf("%f", &F);
	}
	float C;
	C = (5.0 / 9.0 )*(F - 32);
	printf("The corresponding Celsius temperature is;%.2f\n", C);
	return 0;
}
