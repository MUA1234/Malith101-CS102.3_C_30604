 #include <stdio.h>

 int main()
 {
    int number;
printf("Enter a number: ");
scanf("%d", &number);

 int sum = 0;
 int remainder;

 while (number > 0) {
 remainder = number % 10;
 sum += remainder;
 number = number / 10;
 }
 printf("Sum of digits: %d\n", sum);
}
