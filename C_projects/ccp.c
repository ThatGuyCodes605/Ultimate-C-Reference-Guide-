#include <stdio.h>
#include <math.h>

/* Simple program to compute circle area, sphere surface area, and sphere volume
   from a user-provided radius (in centimeters). */
int main() {
    // radius entered by the user (centimeters)
    double radius = 0.0;
    // area of a circle with given radius (square centimeters)
    double area = 0.0;
    // surface area of a sphere with given radius (square centimeters)
    double sa = 0.0;
    // mathematical constant pi (approximate)
    const double PI = 3.14159;
    // volume of a sphere with given radius (cubic centimeters)
    double vol = 0.0;

    // prompt user for input
    printf("enter the radius (cm): ");
    scanf("%lf", &radius);

    // compute the area of a circle: A = pi * r^2
    area = PI * pow(radius, 2);
    // compute the surface area of a sphere: SA = 4 * pi * r^2
    sa = 4 * PI * pow(radius, 2);
    // compute the volume of a sphere: V = (4/3) * pi * r^3
    vol = (4.0 / 3.0) * PI * pow(radius, 3);

    // print results with units
    printf("the area is: %lfcm\n", area);
    printf("surface area is: %lfcm\n", sa);
    printf("volume is: %lfcm", vol);

    // return 0 to indicate successful execution
    return 0;
}