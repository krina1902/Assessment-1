#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int rem,temp=n,sum=0;
    while (n!=0)
    {
        rem=n%10;
        sum=sum*10 + rem;
        n/=10;
    }
    if(sum==temp)
    {
        printf("the given value is palindrome!!!!");
    }
    else{
         printf("the given value is not palindrome!!!!");
    }
    return 0;
}