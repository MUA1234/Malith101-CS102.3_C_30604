#include <stdio.h>

int main()
{
    int number, sum = 0;
 printf("Enter numbers (enter -1 to stop):\n");
 while (1) {
 scanf("%d", &number);
 if (number == -1) {
 break;}
sum += number;
}
printf("Sum: %d\n", sum);
}
