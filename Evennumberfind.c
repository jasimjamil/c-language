#include <stdio.h>
int main (){
// Even number :
int number ;
printf("Enter any Number :");
scanf("%d", &number);

if(number %2==0){
    printf("Yes even number : ");
    if (number % 2==1){
        printf("its is odd number ");
    }
else {
    printf("it is no odd its even number ");


}

}
else{
    printf("no its no even sorry :");

}
return 0 ;
}