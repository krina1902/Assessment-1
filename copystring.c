#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[20] = "|Hello";
    char s2[20];
    strcpy(s2,s1);
    printf("the string is %s",s2);
    return 0;
}