#include <stdio.h>
int main (){


int n;
int i;
printf("Enter Number any :");

scanf("%d", &n);

///use of loop:
for(i = 100; i>=n; i-- ){
    if(i%2==1) printf("%d \n ", i);
}

return 0 ;
}


