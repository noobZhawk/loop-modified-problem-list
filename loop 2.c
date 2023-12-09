#include <stdio.h>
int main()
{
    int x,y,z=1,a;

    printf("Input number of terms: ");
    scanf("%d",&y);

     printf("The odd numbers are :");
    for(x=1;x<=y;x++)
      {
        a=a+z;
        printf(" %d",z);
        z=z+2;
      }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d",y,a);



    return 0;
}
