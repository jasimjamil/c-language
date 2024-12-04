// Any integer is input through the keyboard. Write a program to find
// out whether it is an odd number or even number.

#include <stdio.h>
int main (){

    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
// for (int i = 0; i<=number; i++){
//     printf("%d \n", number);
// }
    if (number % 2 == 0) {
        printf("It is an Even Number\n");
    } else if (number % 2 == 1){
          printf("It is an Odd Number\n");
    }
 


}