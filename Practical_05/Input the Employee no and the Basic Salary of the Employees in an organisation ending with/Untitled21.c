#include <stdio.h>

int main()
{
  int employeeNo;
 double basicSalary;
 int countSalaryGreaterThanOrEqualTo5000 = 0;
 printf("Enter employee number and basic salary (Enter -999 for employee number to end):\n");
 while (1) {
 scanf("%d", &employeeNo);
 if (employeeNo == -999) {
 break;
 }
 scanf("%lf", &basicSalary);
 if (basicSalary >= 5000) { countSalaryGreaterThanOrEqualTo5000++;
 }
 }
 printf("Number of employees with a basic salary >= 5000:%d\n",
countSalaryGreaterThanOrEqualTo5000);
}
