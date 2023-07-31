#include <stdio.h>

int main()
{
     int no1,no2,no3,max,min;

     printf("Enter the first number: ");
     scanf("%d",&no1);

     printf("Enter the second number: ");
     scanf("%d",&no2);

     printf("Enter the third number: ");
     scanf("%d",&no3);

     if (no1>no2&&no1>no3)
     max=no1;

     else if (no2>no1&&no2>no3)
     max=no2;

     else
     max=no3;

     printf("The highest number is %d\n",max);

     if (no1<no2&&no1<no3)
     min=no1;

     else if (no2<no1)
     min=no2;

     else
     min=no3;

     printf("The lowest number is %d",min);
}
