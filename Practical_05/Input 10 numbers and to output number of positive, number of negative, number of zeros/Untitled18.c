#include <stdio.h>

int main()
{
   int numbers[10];
 int positiveCount = 0,
 negativeCount = 0,
 zeroCount = 0;
 printf("Enter 10 numbers:\n");
 for (int i = 0; i < 10; i++) {
 scanf("%d", &numbers[i]);
 if (numbers[i] > 0) {
 positiveCount++;
 } else if (numbers[i] < 0) {
 negativeCount++;
 } else { zeroCount++;
 }
 }
 printf("Positive numbers: %d\n", positiveCount);
 printf("Negative numbers: %d\n", negativeCount);
 printf("Zeroes: %d\n", zeroCount);
}
