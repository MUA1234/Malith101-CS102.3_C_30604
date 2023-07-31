#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no1,no2,avg;
   printf("Enter The Distance Travelled\n");
   scanf("%d",&no1);
   printf("Enter The Time Taken\n");
   scanf("%d",&no2);
   avg=no1/no2;
   printf("The Average Speed is %d ms-1",avg);
    return 0;
}
