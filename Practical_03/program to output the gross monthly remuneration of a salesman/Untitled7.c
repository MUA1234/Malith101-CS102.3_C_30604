#include <stdio.h>

int main()
{
int service;
double basicSalary, sales, additionalAllowance = 0, bonusPercentage, bonusAmount,grossRemuneration;
char location;

printf("Enter the basic salary: ");
scanf("%lf", &basicSalary);

printf("Enter the monthly sales: ");
scanf("%lf", &sales);

printf("Enter the location of working place( Input character C if the city is Colombo): ",location);
scanf(" %c", &location);

printf("Enter years of service:",service);
scanf("%d",&service);

if (service > 5)
{
 additionalAllowance = 0.1 * basicSalary;
}
 if (location=='C')
 {
 additionalAllowance=additionalAllowance+2500;
 }
 if (sales >= 0 && sales <= 25000)
 {
 bonusPercentage = 0.10;
 } else if (sales > 25000 && sales <= 50000)
 {
 bonusPercentage = 0.12;
 } else {
 bonusPercentage = 0.15;
 }
 bonusAmount = bonusPercentage * sales;
 grossRemuneration = basicSalary + additionalAllowance + bonusAmount;

 printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
 }
