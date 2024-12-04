// Write a program that accepts as input -
// ◼ The Dollar-Rupee exchange rate
// ◼ An integer amount of dollars






#include <stdio.h>
int main(void)
{
double Rupees, xchange;
int dollars;

printf("Enter the US$-PKR exchange rate: ");
scanf("%lf", &xchange);
printf("Enter the amount of dollars: ");
scanf("%d", &dollars);
Rupees = dollars * xchange;
printf("%d dollars = %g Rupees\n", dollars, Rupees);

return 0;
}