#include <stdio.h>
#include <string.h>
int main() {
    //madlibs game
    char noun[50] = ""; //noun is a string with maximum of 50 characters
    char verb[50] = ""; //verb is a string with maximum of 50 characters
    char adj1[50] = ""; //you get the point
    char adj2[50] = "";
    char adj3[50] = "";
    printf("Enter an adjective (description): "); //prompt user for adjective
    fgets(adj1, sizeof(adj1), stdin); //read input from user
    adj1[strlen(adj1) - 1] = '\0';//remove newline character from the string
    printf("Enter a noun (animal or person): "); //prompt user for noun
    fgets(noun, sizeof(noun), stdin); //read input from user
    noun[strlen(noun) - 1] = '\0'; //remove newline character from the string
    printf("Enter an adjective (description): "); //prompt user for adjective
    fgets(adj2, sizeof(adj2), stdin);//read input from user
    adj2[strlen(adj2) - 1] = '\0';//remove newline character from the string
    printf("enter a verb (-ing): ");//prompt user for verb
    fgets(verb, sizeof(verb), stdin);//read input from user
    verb[strlen(verb) - 1] = '\0';//remove newline character from the string
    printf("Enter an adjective (description): ");//prompt user for adjective
    fgets(adj3, sizeof(adj3), stdin);//read input from user
    adj3[strlen(adj3) - 1] = '\0';//remove newline character from the string
    printf("%s %s %s %s %s\n", adj1, noun, adj2, verb, adj3);//debug line to check inputs
    printf("\nToday I went to a %s zoo.\n", adj1);//print the story
    printf("i went to an exhibit, I saw a %s.\n", noun);//print the story
    printf("%s was %s and %s!\n", noun, adj2, verb);//print the story
    printf("I was %s!\n",adj3);//print the story
    return 0; //return 0 means the program ended successfully
}