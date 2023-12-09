#include<stdio.h>
int main()
{
    int a,i,s;
    int fib,y;
    printf("Input number of terms to display:");
    scanf("%d",&a);
    printf("Here is the Fibonacci series up to to %d terms : ",a);
     fib=0;
        y=1;

    for (i=0;i<a;i++){
        if(i<=1)
           s=i;
        else{
            s=fib+y;
            fib=y;
            y=s;
        }
        printf("%d ",s);
        }
}
