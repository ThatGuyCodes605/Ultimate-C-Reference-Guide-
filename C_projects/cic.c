#include <stdio.h>
#include <math.h>
int main() {
    // compound intrest calculator
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;
    printf("compound intrest calculator\n");
    printf("enter the principle (P): $");
    scanf("%lf", &principal);
    printf("enter the intrest rate (r): %%");
    scanf("%lf", &rate);
    rate = rate / 100;
    printf("enter the number of years (t): "); 
    scanf("%d", &years);
    printf("enter number of times compounded per year (n)");
    scanf("%d", &timesCompounded);
    total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);
    printf("the total amount after %d years is: $%.2lf\n", years, total);
    return 0;
}
