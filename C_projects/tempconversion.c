#include <stdio.h>
#include <math.h>
int main() {
    // temperature conversion calculator
    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    printf("Temperature Conversion Calculator\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Enter your choice (C/F): ");
    scanf("%c", &choice);
    if (choice == 'C')
    {
        printf("enter the temperature in celsius: ", "\n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0f / 5.0f) + 32;
        printf("the temperature in fahrenheit is: %.2f F\n", fahrenheit);   
    }
    else if(choice == 'F'){
        printf("enter the temperature in fahrenheit: ", "\n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0f / 9.0f;
        printf("the temperature in celsius is: %.2f C\n", celsius);
    }
    else{
        printf("invalid choice! (C/F)\n");
        return 1;
    }
    
    return 0; 
}