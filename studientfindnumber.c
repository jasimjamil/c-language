#include <stdio.h>
int main (){

int n;
printf("enter number of studient as :");

scanf("%d", &n );

if (n>90 && n<100){
    printf("excellent ");
}
else if(n>80 && n<90)
{
    printf("good");


}
else if(n>70 && n<80)
{
    printf("pass");
}
else{
    printf("fail");
    printf("\n");
}
return 0 ;
}