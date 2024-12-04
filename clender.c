// According to the Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.

#include <stdio.h>



int main() {
    int year, days = 0;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate days from 01/01/01 to 01/01/year
    for (int i = 1; i < year; i++) {
       
    }
if (year % 4 ==0 && year % 100 != 0){
    
}
   
    // int dayOfWeek = days % 7;
    

    
    // switch (dayOfWeek) {
    //     case 0: printf("January 1 of %d is a Monday.\n", year); 
    //     break;

    //     case 1: printf("January 1 of %d is a Tuesday.\n", year);
    //      break;
    //     case 2: printf("January 1 of %d is a Wednesday.\n", year);
    //      break;
    //
    return 0;
}
