#include <stdio.h>

int main(void)
{
int i, j, min;

printf("Please enter two numbers: ");
scanf("%d%d", &i, &j);

min = i<j ? i : j;
printf("The minimum between %d and %d is %d\n", i, j, min);

return 0;
}
