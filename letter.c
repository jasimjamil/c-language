

#include <stdio.h>

int main() {
    char lowercase_letter, uppercase_letter;

    // Prompt the user for a lowercase letter
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase_letter);

    // Convert to uppercase by subtracting the ASCII difference
    uppercase_letter = lowercase_letter - 'a' + 'A';

    // Display the uppercase letter
    printf("Uppercase letter: %c\n", uppercase_letter);

    return 0;
}
