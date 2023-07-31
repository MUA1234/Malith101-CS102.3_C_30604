#include <stdio.h>

int main()
{
    int marks[10],total=0;
for(int x=0;x<10;x++)
{
printf("Enter Mark %d: ", x + 1);
scanf("%d",&marks[x]);
total+=marks[x];
 }
 float avg=(float)total/10;

 printf("Total: %d\n",total);
 printf("Average: %.2f\n",avg);

 if (avg>=50){
 printf("Pass\n");

 } else{
 printf("Fail\n");
 }
 }
