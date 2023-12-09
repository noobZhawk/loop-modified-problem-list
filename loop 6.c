#include <stdio.h>
int main()
{
    int a;
    int i,x=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       x=x*i;
    }
    printf("the factorial of %d is: %d ",a,x);
}
