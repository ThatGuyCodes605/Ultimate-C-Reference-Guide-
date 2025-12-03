//ik its scary but you have to do it if you dont like it go back to python you little shit
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
//in C you can print the address of a variable by using the & symbol here is an example:
int main() {
    int age = 37;
    printf("the address of age is: %p\n", &age); //%p is a format specifier for pointers
    //pointers
    int x = 5;
    int y = x;      // y = 5 (independent copy)
    x = 7;          // x = 7, y still = 5
    int *x_ptr = &x;  // pointer to x (which is 7)
    int z = *x_ptr;   // z = 7 (copy of x's current value)
    *x_ptr = 12;      // x is now 12 (y and z unchanged)

    int idk = 5;
    int *p = &idk;
    printf("%p\n", &idk);
    int slices = 20;
    int *ptr = &slices;
    printf("Slices of pizza: %d\n", *ptr);
    slices = 21; //changes pointer as well
    *p = 25; //changes variable as well
    (*p)++; //this is how you increment pointer not *p++; because it will be like *(p++); <- this is bad
    int b = 42;
    int *a;
    a = &b;
    printf("Value of b: %d\n", *a);
    printf("address of b: %p\n", a);
    printf("address of a: %p\n", &a);
    //star operator dereferences the pointer
    *a = 50;
    printf("New value of b: %d\n", b);
    int v,h,j;
    v = h = j = 0;
    printf("enter 3 numbers: ");
    scanf("%d %d %d", &v, &h, &j); //& is used to get the address of the variable
    printf("you entered: %d %d %d\n", v + h + j);
    int t, f;
    t = 5;
    f = 10;
    printf("before swap t: %d f: %d\n", t, f);
    swap(&t,&f); //passing the address of t and f to the swap function
    printf("after swap x: %d y: %d\n", t, f);
    int *o;
    int length = 0;
    printf("enter the length of the array: ");
    scanf("%d", &length);
    o = (int *)malloc(length * sizeof(int)); //dynamic memory allocation
    for (int i = 0; i < length; i++) {
        o[i] = i * 2;
    }
    printf("array elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", o[i]);
    }
    free(o); //freeing the allocated memory
    return 0;
}
void swap(int *a, int *b) { //function to swap two integers using pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}