#include <stdio.h>

int main()
{
      int no1,no2;

      printf("Enter first integer: ");
      scanf("%d",&no1);

      printf("Enter second integer: ");
      scanf("%d",&no2);

      if (no1%no2==0)
      printf("%d is a multiple of %d",no1,no2);

      else
      printf("%d is not a multiple of %d",no1,no2);
}
