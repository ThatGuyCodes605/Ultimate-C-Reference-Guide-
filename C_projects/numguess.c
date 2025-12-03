#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    printf("%d\n", answer);
    printf("---NUMBER-GUESSING-GAME---\n");
    do {
        printf("Guess a number between %d and %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("TOO LOW TRY AGAIN: \n");
        }
        else if (guess > answer){
            printf("TOO HIGH TRY AGAIN: \n");
        }
        else{
            printf("CORRECT\n");
        }
    }while (guess != answer);
    printf("the answer was %d\n",answer);
    printf("it took you %d attempts\n", tries);
    //hello... are you there?

}