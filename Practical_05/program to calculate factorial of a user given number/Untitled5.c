#include <stdio.h>

int main()
{
   int number,i;
int factorial=1;

printf("enter a number: ");
scanf("%d",&number);

if (number<0){
printf("Not Calculateble.\n");
 }
 else if (number==0){
 printf("factorial of %d is %d\n",number,1); }

 else{
 for(i=1;i<=number;i++);
 factorial+=i;
 }
 printf("Factorial of %d is %d \n",number,factorial);
}
