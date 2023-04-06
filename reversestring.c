#include<stdio.h>
#include<conio.h>
int main()
{
    char s[20] = "Hello";
    int l= strlen(s);
    for (int i = l-1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
    
}