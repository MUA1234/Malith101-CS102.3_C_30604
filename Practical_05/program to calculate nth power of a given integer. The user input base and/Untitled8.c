#include <stdio.h>

int main()
{
   int base, exponent;
long long result = 1;
 printf("Enter the base: ");
 scanf("%d", &base);
 printf("Enter the exponent: ");
 scanf("%d", &exponent);
 for (int x = 0; x < exponent; x++)
 {
 result *= base;
 }
 printf("Result: %lld\n", result);
 }
