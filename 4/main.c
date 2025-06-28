#include <stdio.h>

int main(){

    //arithmatic operators = + - * / % ++ --

    int x = 2;
    float y = 3;
    float z = 0;

    z = x / y; //integers cannot retain decimal portions 

    printf("%f\n", z);

    //augmented assignment operator

    x += 2 ;

    printf("%d\n", x);

    return 0;
}