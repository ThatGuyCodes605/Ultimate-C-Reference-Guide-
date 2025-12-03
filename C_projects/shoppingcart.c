#include <stdio.h>
#include <string.h>
int main() {
    char item[50] = "";//name of the item
    float price = 0.0f; //price of each item
    int quantity = 0; //quantity of items
    char currency = '$'; //currency symbol
    float total = 0.0f; //total price
    printf("what item would you like to buy?: "); //ask for item
    fgets(item, sizeof(item), stdin); //no, & for strings
    item[strlen(item) - 1] = '\0';     //remove newline character from the string
    printf("what is the price for each item?: $"); //ask for price
    scanf("%f", &price); //& is used to get the address of the variable
    printf("how many would you like?: "); //ask for quantity
    scanf("%d", &quantity); //& is used to get the address of the variable
    total = price * quantity; //calculate total price
    printf("you have bought %d %s's\n", quantity, item); //%d for integer, %s for string
    printf("your total is: %c%.2f\n", currency, total); //%.2f means 2 decimal places
}