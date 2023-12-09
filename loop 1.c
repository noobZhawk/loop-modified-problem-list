#include <stdio.h>
int main()
{
    int x,y,z=1,a;

    scanf("%d",&y);

     printf("The first %d numbers are :",y);
    for(x=1;x<=y;x++)
      {
        a=a+z;
        printf(" %d",z);
        z++;
      }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d",y,a);



    return 0;
}
