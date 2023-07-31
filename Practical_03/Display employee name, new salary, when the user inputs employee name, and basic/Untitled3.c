#include <stdio.h>

int main()
{
     int Bsalary,Nsalary;
     char EName[100];

     printf("Enter Employee name: ");
     scanf("%s",EName);

     printf("Enter your basic salary: ");
     scanf("%d",&Bsalary);

     if (Bsalary<5000)
     Nsalary=Bsalary+Bsalary*5/100;

     else if (Bsalary>=5000&&Bsalary<10000)
     Nsalary=Bsalary+Bsalary*10/100;

     else if (Bsalary>=10000)
     Nsalary=Bsalary+Bsalary*15/100;

     printf("Your new salary is %d",Nsalary);
}
