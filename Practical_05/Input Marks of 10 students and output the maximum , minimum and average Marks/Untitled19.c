#include <stdio.h>

int main()
{
    int marks[10];
int sum = 0;
int maximum, minimum;
 printf("Enter marks of 10 students:\n");
 for (int i = 0; i < 10; i++) {
 scanf("%d", &marks[i]);
 sum += marks[i];
 if (i == 0) {
 maximum = marks[i];
 minimum = marks[i];
 } else {
 if (marks[i] > maximum) {
 maximum = marks[i];
 }
 if (marks[i] < minimum) {
 minimum = marks[i];
 }
 }
 }
 double average = (double) sum / 10;
 printf("Maximum marks: %d\n", maximum);
 printf("Minimum marks: %d\n", minimum);
 printf("Average marks: %.2f\n", average);
}
