#include <stdio.h>

int main() {
    int x;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &x);

    printf("Multiplication Table of %d:\n", x);
    for ( int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}



