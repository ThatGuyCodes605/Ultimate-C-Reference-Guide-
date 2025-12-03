#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getpcchoice();
int getusrchoice();
void checkwinner(int usrchoice, int pcchoice);
int main() {
    srand(time(NULL));
    printf("*** ROCK PAPER SCISSORS ***\n");
    int usrchoice = getusrchoice();
    int pcchoice = getpcchoice();
    switch (usrchoice) {
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("you chose SCISSORS\n");
            break;
    }
    switch (pcchoice) {
        case 1:
            printf("CPU chose ROCK\n");
            break;
        case 2:
            printf("CPU chose PAPER\n");
            break;
        case 3:
            printf("CPU chose SCISSORS\n");
            break;
    }
    checkwinner(usrchoice, pcchoice);
    return 0;
}
int getpcchoice() {
    return (rand() % 3) + 1;
}
int getusrchoice() {
    int choice = 0;
    do {
        printf("choose an option\n");
        printf("1.ROCK\n2.PAPER\n3.SCISSORS\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
    }while (choice < 1 || choice > 3);
    return choice;
}
void checkwinner(int usrchoice, int pcchoice) {
    if (usrchoice == pcchoice) {
        printf("iTS A TIE!\n");
    }
    else if (usrchoice == 1 && pcchoice == 3) {
        printf("YOU WIN!\n");
    }
    else if (usrchoice == 2 && pcchoice == 1) {
        printf("YOU WIN!\n");
    }
    else if (usrchoice == 3 && pcchoice == 2) {
        printf("YOU WIN!\n");
    }
    else {
        printf("YOU LOSE!");
    }


}