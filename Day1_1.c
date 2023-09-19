#include <stdio.h>

int main() {
    int basic;
    char grade;

    // Input basic salary and grade
    printf("Enter basic salary: ");
    scanf("%d", &basic);
    printf("Enter grade (A, B, or C): ");
    scanf(" %c", &grade);  // Note the space before %c to consume newline character

    // Calculate hra, da, allow, and pf
    float hra = 0.20 * basic;
    float da = 0.50 * basic;
    int allow = (grade == 'A') ? 1700 : ((grade == 'B') ? 1500 : 1300);
    float pf = 0.11 * basic;

    // Calculate total salary
    float totalSalary = basic + hra + da + allow - pf;

    // Round off to integral part
    int roundedTotalSalary = (int)(totalSalary + 0.5);  // Adding 0.5 for proper rounding

    // Print the integral part of the rounded total salary
    printf("Total Salary: %d\n", roundedTotalSalary);

return 0;

    
}










