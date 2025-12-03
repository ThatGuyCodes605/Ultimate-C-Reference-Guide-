#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
// ===== FUNCTION PROTOTYPES =====
void hello(char name[], int age);
bool ageCheck(int age);
void square(int num);
void happybday(char name4[], int age4);

// ===== FUNCTION DEFINITIONS =====
void square(int num) {
    int result = num * num;
    printf("The square of %d is %d\n", num, result);
}
void birthday(int *age);
void happybday(char name4[], int age4) {
    printf("\nHappy birthday to you");
    printf("\nHappy birthday to you");
    printf("\nHappy birthday dear %s!", name4);
    printf("\nHappy birthday to you");
    printf("\nyou are %d years old!\n", age4);
}
//typedef
typedef int num;
typedef char* str;
//enums
typedef enum{
     MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
}Day;
enum Status {
    SUCCESS, FAILURE, PENDING
};
//structs
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;

}Student;
struct Car {
    str model;
    num year;
    num price;
};
void printstudent(Student student);


int main() {
    // ===== BASIC OUTPUT =====
    printf("i like pizza!\n");
    printf("Its really good");

    // ===== VARIABLES & FORMAT SPECIFIERS =====
    int age = 25;
    printf("\nyou are %d years old", age);
    int year = 2025;
    printf("\ncurrent year is %d", year);
    float pi = 3.14;
    printf("\nvalue of pi is %f", pi);
    float precisePi = 3.1415926535;
    printf("\nvalue of precise pi is %.10f", precisePi);
    double largeNumber = 12.123456897213898979;
    printf("\nvalue of large number is %.15lf", largeNumber);
    char grade = 'A';
    printf("\nyour grade is %c", grade);
    char name[] = "Asher";
    printf("\nyour name is %s", name);
    char food[] = "pizza";
    printf("\nyour favorite food is %s", food);
    char email[] = "fake123@fake.fake";
    printf("\n your email is %s", email);
    bool isOnline = true;
    printf("%d", isOnline);
    bool isStudent = true;

    // ===== FORMAT SPECIFIERS DEMO =====
    int age1 = 30;
    printf("\n your age is %d", age);
    float gpa = 3.75;
    printf("\n your gpa is %.2f", gpa);
    double balance = 12345.6789;
    printf("\n your balence is %lf", balance);
    char initial = 'J';
    printf("\n your initial is %c", initial);
    char banana[] = "banana";
    printf("\n your favorite fruit is %s", banana);

    // ===== WIDTH FORMATTING =====
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    printf("\n%1d", num1);
    printf("\n%10d", num2);
    printf("\n%20d", num3);
    printf("\n%-1d", num1);
    printf("\n%-10d", num2);
    printf("\n%-20d", num3);
    printf("\n%01d", num1);
    printf("\n%010d", num2);
    printf("\n%020d", num3);
    printf("\n%+1d", num1);
    printf("\n%+2d", num2);
    printf("\n%+3d", num3);

    // ===== PRECISION FORMATTING =====
    float number = 3.14159265;
    printf("\n%.2f", number);
    printf("\n%.4f", number);
    printf("\n%.6f", number);
    printf("\n%7.2f", number);
    printf("\n%10.4f", number);
    printf("\n%12.6f", number);
    printf("\n%-7.2f", number);
    printf("\n%-10.4f", number);
    printf("\n%-12.6f", number);

    // ===== ARITHMETIC OPERATORS =====
    int x = 2;
    int y = 3;
    int z = 0;
    z = x + y;
    printf("\n%d + %d = %d", x, y, z);
    z = x - y;
    printf("\n%d - %d = %d", x, y, z);
    z = x * y;
    printf("\n%d * %d = %d", x, y, z);
    z = x / y;
    printf("\n%d / %d = %d", x, y, z);
    z = x % y;
    printf("\n%d %% %d = %d", x, y, z);
    x++;
    printf("\n x after increment is %d", x);
    y--;
    printf("\n y after decrement is %d", y);
    x += 5;
    printf("\n x after x += 5 is %d", x);
    y -= 2;
    printf("\n y after y -= 2 is %d", y);
    x *= 3;
    printf("\n x after x *= 3 is %d", x);
    y /= 2;
    printf("\n y after y /= 2 is %d", y);
    x %= 4;
    printf("\n x after x %%= 4 is %d", x);

    // ===== USER INPUT =====
    int age2 = 0;
    float gpa2 = 0.0f;
    char grade2 = '\0';
    char name2[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age2);
    printf("Enter your gpa: ");
    scanf("%f", &gpa2);
    printf("Enter your grade: ");
    scanf(" %c", &grade2);
    printf("Enter your name: ");
    getchar();
    fgets(name2, sizeof(name2), stdin);
    name2[strlen(name2) - 1] = '\0';
    printf("\nYou entered:\nAge: %d\nGPA: %.2f\nGrade: %c\nName: %s\n", age2, gpa2, grade2, name2);

    // ===== MATH FUNCTIONS =====
    int a = 9;
    x = sqrt(x);
    printf("\n x squared is %d", x);
    x = pow(a, 3);
    printf("\n a to the power of 3 is %d", x);
    float b = 3.7f;
    b = ceil(b);
    printf("\n b rounded up is %.2f", b);
    b = floor(b);
    printf("\n b rounded down is %.2f", b);
    b = round(b);
    printf("\n b rounded to nearest integer is %.2f", b);
    int c = -3;
    c = abs(c);
    printf("\n absolute value of c is %d", c);

    // Fixed: use double for math functions that return double
    double d = 3.0;
    d = log(d);
    printf("\n natural log of d is %.2f", d);
    d = sin(d);
    printf("\n sine of d is %.2f", d);
    d = cos(d);
    printf("\n cosine of d is %.2f", d);
    d = tan(d);
    printf("\n tangent of d is %.2f", d);

    // ===== IF/ELSE STATEMENTS =====
    int testscore = 85;
    if (testscore >= 90) {
        printf("\nYou got an A");
    } else if (testscore >= 80) {
        printf("\nYou got a B");
    } else if (testscore >= 70) {
        printf("\nYou got a C");
    } else if (testscore >= 60) {
        printf("\nYou got a D");
    } else {
        printf("\nYou got an F");
    }
    bool isStudent2 = true;
    if (isStudent2) {
        printf("\nYou are a student");
    } else {
        printf("\nYou are not a student");
    }

    // ===== STRING COMPARISON =====
    char name3[50] = "";
    printf("\nEnter your name: ");
    fgets(name3, sizeof(name3), stdin);
    name3[strlen(name3) - 1] = '\0';
    if (strcmp(name3, "Asher") == 0) {
        printf("Hello Asher!");
    } else if (strlen(name3) == 0) {
        printf("You didn't enter a name!");
    } else {
        printf("Hello %s!\n", name3);
    }

    // ===== SWITCH STATEMENTS =====
    int dayoftheweek = 0;
    printf("enter day of the week: ");
    scanf("%d", &dayoftheweek);
    switch (dayoftheweek) {
        case 1:
            printf("it is Monday\n");
            break;
        case 2:
            printf("it is Tuesday\n");
            break;
        case 3:
            printf("it is Wednesday\n");
            break;
        case 4:
            printf("it is Thursday\n");
            break;
        case 5:
            printf("it is Friday\n");
            break;
        case 6:
            printf("it is Saturday\n");
            break;
        case 7:
            printf("it is Sunday\n");
            break;
        default:
            printf("invalid day\n");
            break;
    }

    // ===== NESTED IF STATEMENTS =====
    float price2 = 10.00;
    bool isStudent3 = true;
    bool isSenior = true;
    if (isStudent3) {
        if (isSenior) {
            printf("You get both student and senior discount!\n");
            price2 = price2 * 0.70; //30% discount for students and seniors
        } else {
            printf("You get student discount!\n");
            price2 = price2 * 0.90; //10% discount for students
        }
    } else if (isSenior) {
        printf("You get senior discount!\n");
        price2 = price2 * 0.80; //20% discount for seniors
    }
    printf("the price of the ticket is: $%.2f\n", price2);

    // ===== LOGICAL OPERATORS =====
    bool hasID = true;
    bool isSober = false;
    if (hasID && isSober) {
        printf("You can enter the club\n");
    } else {
        printf("You cannot enter the club\n");
    }
    bool knowsPassword = true;
    if (hasID || knowsPassword) {
        printf("You can enter the system\n");
    } else {
        printf("You cannot enter the system\n");
    }
    if (!isSober) {
        printf("You cannot drive\n");
    } else {
        printf("You can drive\n");
    }

    // ===== FUNCTION CALLS =====
    char name4[50] = "";
    int age4;
    getchar(); // consume newline from previous scanf
    printf("Enter name for birthday song: ");
    fgets(name4, sizeof(name4), stdin);
    name4[strlen(name4) - 1] = '\0';
    printf("Enter age for birthday song: ");
    scanf("%d", &age4);
    happybday(name4, age4);
    happybday(name4, age4);
    happybday(name4, age4);
    square(5);
    if (ageCheck(16)) {
        printf("you are old enough to work!");
    } else {
        printf("just fuck off im sick and tired of this shit");
    }

    // ===== WHILE LOOPS =====
    int number69 = 0;
    while (number69 <= 0) {
      printf("\nenter a number greater or less than 0\n");
      scanf("%d",&number69);
    }
    
    char name5[50] = "";
    printf("enter your name: \n");  
    fgets(name5,sizeof(name5),stdin);
    name5[strlen(name5) - 1] = '\0';
    while (strlen(name5) == 0) {
        printf("enter your name >:( : \n");
        fgets(name5,sizeof(name5),stdin);
        name5[strlen(name5) - 1] = '\0';
    }
    printf("hello %s\n", name5);
    
    // ===== FOR LOOPS =====
    for (int c = 0; c <= 10; c++) {
        printf("%d\n", c);
    }
    for (int c = 0; c <= 10; c+=2) {
        printf("%d\n", c);
    }
    for (int c = 10; c >= 0; c--) {
        printf("%d\n", c);
    }
    for (int c = 10; c >= 0; c-=2) {
        printf("%d\n", c);
    }
    for (int c = 10; c >= 1; c--) {
        printf("%d\n", c);
        sleep(1);
    }
    printf("HAPPY NEW YEAR");
    for (int c = 1; c <= 10; c++){
        if (c == 5){
            break;
        }
        printf("%d\n", c);
    }
    for (int c = 1; c <= 10; c++){
        if (c == 5){
            continue; //skip the rest of the loop and go to the next iteration
        }
        printf("%d\n", c);
    }
    for (int c = 1; c <= 10; c++){
        if (c % 2 == 0){
            continue; //skip even numbers
        }
        printf("%d\n", c);
    }
    //nested for loops
    for(int c = 1; c <= 3; c++){
        for(int d = 1; d < 10; d++){
            printf("%d", d);
        }
        printf("\n");
    }
    for(int c = 1; c <= 10; c++){
        for(int i = 1; i <= 10; i++){
            printf("%3d ", c * i);
    }
    }
    int rows = 0;
    int cols = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("enter your symbol: ");
    char symbol;
    scanf(" %c", &symbol);
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= cols; c++) {
            printf("%c", symbol);
    }
        printf("\n");
    }
    srand(time(NULL)); //seed random number generator
    printf("your random number is: %d\n", rand()); //random number
    int min = 50;
    int max = 100;
    int randomNum = (rand() % (max - min + 1)) + min;
    printf("%d", randomNum);
    printf("hi");
    //arrays
    int numbers[5] = {10,20,30,40,50};
    printf("%d", numbers[0]); //prints the number 10
    char grades[] = {'A','B','C','D','F'};
    printf("%c", grades[1]); //prints the letter B
    char nameidk[] = "Jamie";
    printf("%d", nameidk[3]); //prints the letter i
    numbers[0] = 100; //changes the first number to 100
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int c = 0; c <= size; c++) {
        printf("\n%c", grades[c]);
    }
    int scores[5] = {0};
    for (int c = 0; c < 5; c++) {
        printf("enter a score: ");
        scanf("%d", &scores[c]);
    }
    for (int c = 0; c < 5; c++) {
        printf("%d ",scores[c]);
    }
    //2d arrays
    int numbers2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("%d ", numbers2[0][0]);
    printf("%d ", numbers2[0][1]);
    printf("%d ", numbers2[1][0]);
    printf("%d ", numbers2[1][1]);
    for (int c =0; c < 3; c++) { //rows
        for (int i =0; i < 3; i++) { //columns
            printf("%d ", numbers2[c][i]);
        }
        printf("\n");
    }
    char fruit[][10]= {"Apple", "Banana", "Coconut"};
    int size1 = sizeof(fruit) / sizeof(fruit[0]);
    fruit[0][0] = 'e';
    fruit[0][4]= 'A';
    for (int c = 0; c < size1; c++) {
        printf("%s\n", fruit[c]);
    }
    char names[3][25] = {0};

    for (int c = 0; c < sizeof(names) / sizeof(names[0]); c++) {
        printf("enter a name: ");
        fgets(names[c], sizeof(names[c]), stdin);
        names[c][strlen(names[c]) - 1] = '\0';
    }
    for (int c = 0; c < sizeof(names) / sizeof(names[0]); c++) {
        printf("%s\n", names[c]);
    }
    //ternary operator ?
    int X = 5;
    int Y = 6;
    int MAX = (x > y) ? x : y;
    printf("%d", MAX);
    bool isOnline1 = true;
    printf("%s", isOnline1 ? "online" : "offline");
    int number420 = 8;
    printf("%d is %s", number420, (number420 % 2 == 0) ? "even" : "odd");
    //typedef
    num h = 10;
    str hi = "hello";
    //enums
    Day today = MONDAY;
    printf("d", today);
    if (today == SUNDAY || today == SATURDAY) {
        printf("ITS THE WEEKEND");
    }
    else {
        printf("ITS A WEEKDAY");
    }
    enum Status status = 0;
    switch (status) {
        case 0:
            printf("SUCCESS");
            break;
        case 1:
            printf("FAILURE");
            break;
        case 2:
            printf("pending...");
            break;
    }
    //structs
    Student student1 = {"Asher",30,2.5,true};
    strcpy(student1.name, "Jamie");
    struct Car cars[] = {{"Mustang", 2025, 32000},{"Corvette", 2026, 68000},{"Challenger", 2024, 29000}};
    int NUMBER = sizeof(cars) / sizeof(cars[0]);
    for (int c = 0; c < NUMBER; c++) {
        printf("%s %d %d\n", cars[c].model, cars[c].year, cars[c].price);
    }
    //pointers!!
    num age822 = 25;
    printf("%p\n", &age822);
    num *pAge = &age822;
    printf("%p", pAge);
    birthday(pAge);
    printf("You are %d years old", age822);
    //writing to a file!
    FILE *pFile = fopen("output.txt", "w" ); //use f for reading a file and w for writing a file
    str text = "Hello, Friend\nwhere did you go?\nHAHAHAHAHAHAHA";
    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }
    fprintf(pFile, "%s", text);
    fclose(pFile);
    //reading a file!
    FILE *pRead = fopen("output.txt", "r");
    char buffer[1024] = {0};
    if(pRead == NULL){
        printf("could not open file");
        return 1;
    }
    while ((fgets(buffer, sizeof(buffer), pRead) != NULL))
    {
        printf("%s", buffer);
    }
    
    fclose(pRead);
    //malloc :D
    int numbr = 0;
    printf("enter the number of grades: ");
    scanf("%d", &numbr);
    char *grades2 = malloc(numbr * sizeof(char));
    if(grades2 == NULL){
        printf("ERROR");
        return 1;
    }
    for(int c = 0; c < numbr; c++){
        printf("enter grade number%d: ", c + 1);
        scanf(" %c", &grades2[c]);
    }
    for(int c = 0; c < numbr; c++){
        printf("%c ", grades2[c]);
    }
    free(grades2);
    grades2 = NULL;
    //calloc :(
    int numberagianforthefiftyithtime = 0;
    printf("enter number of players: ");
    scanf("%d", &numberagianforthefiftyithtime);
    int *scores2 = calloc(numberagianforthefiftyithtime, sizeof(int));
    if(scores2 == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(int i = 0; i < numberagianforthefiftyithtime; i++){
        printf("enter score%d: ", i + 1);
        scanf("%d", &scores2[i]);
    }
    for(int i = 0; i < numberagianforthefiftyithtime; i++){
        printf("%d ", scores2[i]);
    }
    //realloc :/
    free(scores2);
    scores2 = NULL;
    num NUMBERAGINFUCKFUCKFUCKKKKK = 0;
    printf("enter number of prices: ");
    scanf("%d", &NUMBERAGINFUCKFUCKFUCKKKKK);
    float *prices = malloc(NUMBERAGINFUCKFUCKFUCKKKKK * sizeof(float));
    if (prices == NULL) {
        printf("if your reading this i messed up :/");
        return 1;
    }
    for (int c = 0; c < NUMBERAGINFUCKFUCKFUCKKKKK; c++) {
        printf("enter price #%d: ", c + 1);
        scanf("%f", &prices[c]);
    }
    num newnum = 0;
    printf("enter a new number of prices: ");
    scanf("%d", &newnum);
    float *temp = realloc(prices, newnum * sizeof(float));
    if (temp == NULL) {
        printf("if your reading this i messed up :/");
        //return 1;
    }
    else {
        prices = temp;
        temp = NULL;
        for (int c = NUMBERAGINFUCKFUCKFUCKKKKK; c < newnum; c++) {
            printf("enter price #%d: ", c + 1);
            scanf("%f", &prices[c]);
        }
        for (int c = 0; c < newnum; c++) {
            printf("$%.2f", prices[c]);
        }
    }
    for (int c = 0; c < NUMBERAGINFUCKFUCKFUCKKKKK; c++) {
        printf("$%.2f", prices[c]);
    }
    free(prices);
    prices = NULL;
    //memory management my ass
    return 0;
}
void printstudent(Student student) {
    printf("Name: %s\nAge: %d\nGPA: %.2f\n IsFullTime: %s\n",student.name, student.age, student.gpa, (student.isFullTime) ? "true" : "false");
}
void hello(char name[], int age){
    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16;
}
void birthday(int *age){
    (*age)++;

}

