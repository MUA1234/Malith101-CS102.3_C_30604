#include <stdio.h>

int main()
{
    double prices[10];
 double sum = 0;
 int countGreaterThan200 = 0;
 printf("Enter the price of 10 items:\n");
 for (int i = 0; i < 10; i++) {
 scanf("%lf", &prices[i]);
 sum += prices[i];
 if (prices[i] > 200) {
 countGreaterThan200++;
 }
 }
 double average = sum / 10;
 printf("Average price: %.2lf\n", average);
 printf("Number of items with price > 200: %d\n", countGreaterThan200);
}
