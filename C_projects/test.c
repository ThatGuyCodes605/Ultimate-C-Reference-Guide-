
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(){
    char names[3][25] = {0};

    for (int c = 0; c < sizeof(names) / sizeof(names[0]); c++) {
        printf("enter a name: ");
        fgets(names[c], sizeof(names[c]), stdin);
        names[c][strlen(names[c]) - 1] = '\0';
    }
    for (int c = 0; c < sizeof(names) / sizeof(names[0]); c++) {
        printf("%s\n", names[c]);
    }
    return 0;
}
