#include <stdio.h>

int main()
{
   int number, R_Number = 0;

 printf("Enter a number: ");
 scanf("%d", &number);

 do {
 int digit = number % 10;
 R_Number = R_Number * 10 + digit;
 number = number / 10;
 } while (number > 0);
 printf("Reversed number: %d\n", R_Number);
 }
