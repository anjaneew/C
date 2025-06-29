#include <stdio.h>
#include <string.h>

int main(){

    //shopping cart program

    //declare variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0; 
    char currency = '$';
    float total = 0.0f;

    //prompts
    printf("Enter the item: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Enter the quantity: ");
    scanf("%d",&quantity);

    //calculation
    total = price * quantity; 

    //output
    printf("You bougth %d %s(s).", quantity, item);
    printf("The total: %c%.2f", currency, total);
 
    return 0;
}