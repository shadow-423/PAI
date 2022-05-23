#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    char arr1[] = "welcome to SUNT!!!!!!";
    char arr2[] = "---------------------";
    int left = 0;
    //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
    int right = strlen(arr2)-1;
    while (left <= right)
    {
        system("cls");
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(500);
        left++;
        right--;
    }
    return 0;
}