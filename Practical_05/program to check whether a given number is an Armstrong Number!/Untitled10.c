 #include <stdio.h>

 int main()
 {
    int number, O_Number, remainder, result = 0;
 int n = 0;
 printf("Enter a number: ");
 scanf("%d", &number);
 O_Number = number;
 while (O_Number != 0)
{
 O_Number /= 10;
 n++;
 }
 O_Number = number;
 while (O_Number != 0)
{
 remainder = O_Number % 10;
 result += pow(remainder, n);
 O_Number /= 10;
 }
 if (result == number)
{
 printf("%d is an Armstrong number.\n", number);
 } else
 {
 printf("%d is not an Armstrong number.\n", number);
 }
 }
