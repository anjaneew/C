#include <stdio.h>
#include <string.h>


int main(){

   
    int age = 0;  
    double price = 0.00; //no f needed
    float gpa = 0.0f;
    char grade = '\0'; //null terminator \0 - we clear 
    char name[30] = "";
    char fullName[50] = "";
    int class = 0;

     //better to give a value to avoid undefied behaviour
     //int age = 0; better than int age;

    printf("Enter age: ");
    scanf("%d", &age); // & means at the address of our variable (age)
                       //we are going to stick a value in here.

    printf("Enter price: ");
    scanf("%f",&price);

    printf("Enter gpa: ");
    scanf("%f",&gpa);

    //Input buffer issue - 
    //after the gpa there is a new line character in the 
    //input buffer so it will be read as a character
    // solution 1 scanf(" %c",&); - put space before %c
     

    printf("Enter grade: ");
    scanf(" %c",&grade);

    //whitespace issue with strings
    //scanf stops at whitespaces
    //solution fgets - file gets string - needs a header file

    printf("Enter Name: ");
    scanf("%s",&name);

    //Input buffer issue -
    // solution 2 - getchar();
    getchar();
    printf("Enter Full Name: ");
    //better than fgets(fullName, 50, stdin); to stay dynamic
    fgets(fullName, sizeof(fullName), stdin);
    //fgets extra line issue
    //solution 1. needs a header file <string.h>
    fullName[strlen(fullName) -1] = '\0'; //string length 

    printf("Enter class: ");
    scanf("%d", &class);

    printf("\nYour data:\n");
    printf("Age: %d\n", age);
    printf("Price: %f\n", price);
    printf("GPA: %f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);
    printf("FullName: %s\n", fullName);
    printf("Class: %d\n", class);

    return 0;
} 