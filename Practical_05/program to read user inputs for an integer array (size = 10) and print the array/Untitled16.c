#include <stdio.h>

int main()
{
    int numbers[10];
 printf("Enter 10 numbers:\n");
 for (int i = 0; i < 10; i++) { scanf("%d", &numbers[i]);
 }
 printf("Entered numbers:\n");
 for (int i = 0; i < 10; i++) { printf("%d ", numbers[i]);
 }
 printf("\n");
 }
