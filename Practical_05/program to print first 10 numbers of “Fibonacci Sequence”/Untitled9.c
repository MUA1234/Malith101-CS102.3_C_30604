 #include <stdio.h>

 int main()
 {
   int n = 10;
 int first = 0, second = 1;
 int next; printf("Fibonacci Sequence: ");
 for (int x = 0; x < n; x++)
 {
 if (x<= 1) {
 next = x;
 } else {
 next = first + second;
 first = second;
 second = next;
 }
 printf("%d ", next);
 }
 printf("\n");
 }
