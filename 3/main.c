#include <stdio.h>

int main(){

    //Format specifier = special tokens that begin with a % symbol,
    //                   followed by a character that specifies the data type
    //                   and optional modifiers(width, percision, flags).
    //                  They control how data is displayed or interpreted. 

    // width   %d
    
    int num1 = 1;
    int num2 = -10;
    int num3 = 100;
    

    printf("%3d\n", num1); //number means keeping spaces
    printf("%-3d\n", num1);//- means left justified
    printf("%03d\n", num1);//add zeroes
    printf("%4d\n", num2);
    printf("%-4d\n", num2);
    printf("%05d\n", num3);//0 adds zeros

    //flags
    printf("%+4d\n", num2);//+ adds positive or negative
    printf("%+4d\n", num3);


    //Precision
    double num4 = -19.99;

    printf("%f\n",num4);
    printf("%.2f\n",num4);//. and number -  how many decimal points

    //all together
    printf("%+7.2f\n", num4);

    return 0;
} 