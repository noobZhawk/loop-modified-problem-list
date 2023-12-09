#include<stdio.h>
int main()
{
    int x,y,j,i,k;
    printf("input range: ");
    scanf("%d %d",&x,&y);
    printf("The prime number between %d and %d are :",x,y);
    for(i=x;i<=y;i++){

        k=0;

        if((i==0)||(i==1))
            continue;

        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)

               k++;
        }
             if(k==0)
            printf("%d ",i);




    }


}
