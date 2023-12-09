#include<stdio.h>
int main()
{
    int n,rev,rem,t;
    printf("Input a number :");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(t==rev)
        printf("%d is a palindrome number.",t);
    else
        printf("%d is not a palindrome number.",t);
}
