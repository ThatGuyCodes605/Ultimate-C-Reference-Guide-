#include <stdio.h>
#include <math.h>

int main() {
    // weight converter
    float pounds = 0.0f;
    float kilograms = 0.0f;
    printf("weight converter\n");
    printf("enter weight in pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds * 0.45359237f;
    printf("weight in kilograms: %.2f kg\n", kilograms);
    return 0;
}