#include <stdio.h>
int main (){

    float  a, b, c;

    printf("enter number of a :");
    scanf("%f ",&a);
    printf("enter number of b :");
    scanf("%f ",&b);
    printf("enter number of a :");
    scanf("%f ",&c);

    if (a+b  > c && a+c > b && b+c > a){
        printf("good ");


    }else{
        printf("no");
    }
}