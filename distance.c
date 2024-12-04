// The distance between two cities (in km.) is input through the keyboard. Write
// a program to convert and print this distance in meters, feet, inches and
// centimeters.

#include <stdio.h>
int main (){

float distance, meter, feet, inches ,centi;

printf("enter distance:");
scanf("%f", & distance);


meter = distance*1000;
feet = distance * 3280.0;
inches = distance*39379.8;
centi = distance *  10000;

printf("the distance on meter as : %.2f \n", meter);
printf("the distance on feet as : %.2f \n", feet);
printf("the distance on inches as : %.2f \n", inches);
printf("the distance on centi as : %.2f \n", centi);

return 0 ;








}