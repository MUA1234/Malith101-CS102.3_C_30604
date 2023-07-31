#include <stdio.h>

int main()
{
    int rows = 5;
printf("Pattern:\n");
for (int x = 1; x <= rows; x++) {
for (int y = 1; y <= x; y++) {
printf("*");
 }
 printf("\n");
}
}
