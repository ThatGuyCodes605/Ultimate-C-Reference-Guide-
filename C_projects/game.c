#include <stdio.h>
#include <stdbool.h>
int main()
{
  bool IsRunning = true;
  char reponse = '\0';
    while (IsRunning) {

      printf("You are playing a game\n");
      printf("Would you like to continue Y/N: \n");
      scanf(" %s", &reponse); //the white space mean deleate \n
      if (reponse == 'Y' && 'y'){
      IsRunning = true;
    }
    }
  return 0;
}
