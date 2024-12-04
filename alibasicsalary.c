// Ali’s basic salary is input through the keyboard. His dearness allowance is
// 40% of basic salary, and house rent allowance is 20% of basic salary. Write
// a program to calculate his gross salary.

#include <stdio.h>

int main() {
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    // Input basic salary
    printf("Enter Ali's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate allowances
    dearness_allowance = 0.40 * basic_salary; // 40% of basic salary
    house_rent_allowance = 0.20 * basic_salary; // 20% of basic salary

    // Calculate gross salary
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Output gross salary
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
