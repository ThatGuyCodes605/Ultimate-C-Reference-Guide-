#include <stdio.h>
int main(){
    //calculator program
    char operator = '\0'; //operator variable
    double num1 = 0.0; //first number
    double num2 = 0.0; //second number
    double result = 0.0; //result variable
    printf("Enter the first number: "); //first number
    scanf("%lf", &num1); //%lf for double
    printf("Enter the first operator (+ - * /): "); // + - * /
    scanf(" %c", &operator); //space before %c to ignore whitespace
    printf("Enter the second number: "); //second number
    scanf("%lf", &num2); //%lf for double
    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0){
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed\n");
                return 1; //exit program with error
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1; //exit program with error
    }
    printf("result is: %lf\n", result);
    return 0; //end program

}