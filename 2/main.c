#include <stdio.h>
#include <stdbool.h> //header file needed for boolean

int main(){
    //varaiable - reusable container for a value.. behaves as if it were the value it contains


    //--------------Intiger ----------------------
    // Int - whole numbers - 4 bytes in modern systems
    int age = 25; //whole number
    int year = 2025;
    int quantitity = 1;
     
    // % format specifier  %d - decimal  

    printf("You are %d years old.\n", age);
    printf("The year us %d.\n", year);
    printf("You have %d phone.\n", quantitity);

    //---------------Float------------------
    // %f - float   - 6 to 7 digits after the decimal point - single percision decimal number (4 bytes)
    float gpa = 3.2;
    float price = 19.99;
    float tempreature = -10.2;

    printf("\nYour GPA is %f\n", gpa);
    printf("Your GPA is %.1f\n", gpa);
    printf("The item is $%.2f\n", price);
    printf("The tempreture is %.1f°F\n", tempreature);// ° = Alt + 0176

    //-------------Double -----------------------------
    // %lf - long float - many many degits after the decimal
    //default behaviour is to display only 6 but we can use
    // double percision decimal number (8 bytes)

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("\nThe PI is %.15lf\n", pi);
    printf("The Eulers number is %.15lf\n", e);

    

    //-----------Char ------------------
    // %c - charcter - single character - 1 byte

    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("\nYour grade is %c\n", grade);
    printf("The symbol %c\n", symbol);
    printf("The fish is %c%.2f\n", currency, price);

    //----------No strings - Just array of characters--------------
    // %s - string (array of chars)

    char name[] = "Anjanee";
    char food[] = "kiribath";
    char email[] = "baba@gmail.com";

    printf("\nHello%c, my name is %s.\n", symbol, name);
    printf("My favourite food is %s\n", food);
    printf("The email is %s\n", email);

    //------------- boolean --------------------------
    //needs header file <stdbool.h>
    // 1 byte

    bool isStudent = true; // or 1
    bool isBored = false; // or 0
    bool isUseful = true;
    bool isOnline = 1; 

    printf("\nYou are enrolled: %d\n", isStudent);
    printf("You are bored? %d\n", isBored);
    printf("Is this useful? %d\n", isUseful);


    //bools used internally more
    if(isOnline){
        printf("You are online.");
    }
    else{
        printf("You are offline.");
    }

    return 0; 
}