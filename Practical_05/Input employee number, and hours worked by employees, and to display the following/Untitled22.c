#include <stdio.h>

int main()
{
    int employeeNo;
 int hoursWorked;
 int countExceeding4000 = 0;
 int totalEmployees = 0;
 printf("Enter employee number and hours worked (Enter -999 as employee number to end):\n");
 while (1) {
 scanf("%d", &employeeNo);
 if (employeeNo == -999) {
 break;
 }
 scanf("%d", &hoursWorked);
 int overtimeHours = hoursWorked - 40;
 if (overtimeHours > 0) {
 int overtimePayment = 150 * 40 + 200 * overtimeHours;
 if (overtimePayment > 4000) {
 countExceeding4000++;
 }
 printf("Employee Number: %d\n", employeeNo);
 printf("Overtime Payment: Rs. %d\n", overtimePayment);
 totalEmployees++;
 }
 }
 double percentageExceeding4000 = (double) countExceeding4000 / totalEmployees * 100;
 printf("Percentage of employees whose overtime payment exceeds Rs. 4000: %.2lf%%\n", percentageExceeding4000);
}
