  char name3[50] = ""; //string variable
  printf("\nEnter your name: ");
  fgets(name3, sizeof(name3), stdin); //take input
  name3[strlen(name3) - 1] = '\0'; //remove newline character
  if(strcmp(name3, "Asher") == 0){ //compare strings
    printf("Hello Asher!"); //print hello Asher
  }
  else if (strlen(name3) == 0)
  {
     printf("You didn't enter a name!"); //print no name entered
  }
  else {
    printf("Hello %s!", name3); //print hello name3
  }
  return 0; //return 0 means the program ended successfully