#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Input the starting number of the A.P. series: ");
    scanf("%d",&x);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d",&y);
    printf("Input the common difference of A.P. series: ");
    scanf("%d",&z);

    int i,k=0;
    for (i=1;i<=y;i++){

            k=k+x;
            printf("%d",x);
            x=x+z;
            if(i<y)
            printf("+");


}
printf("= %d",k);
}
