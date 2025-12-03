#include <stdio.h>
void checkbalance(float balance);
float deposit();
float withdraw(float balance);
int main() {
   int choice = 0;
   float balance = 0.0f;
   printf("*** WELCOME TO THE BANK OF C ***");
   do {
      printf("\nSelect an option:");
      printf("\n1. check balance");
      printf("\n2. deposit money");
      printf("\n3. withdraw money");
      printf("\n4. exit\n");
      printf("\nenter your choice: ");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            checkbalance(balance);
            break;
         case 2:
            balance += deposit();
            break;
         case 3:
            balance -= withdraw(balance);
            break;
         case 4:
            printf("thank you for using the bank of C");
            break;
         default:
            printf("invalid choice");
      }
   }while (choice != 4);
   return 0;
}
void checkbalance(float balance) {
   printf("\n you current balance is $%.2f\n", balance);
}
float deposit() {
   float amount = 0.0f;
   printf("\n enter amount to deposit: $");
   scanf("%f", &amount);
   if (amount < 0.01f) {
      printf("invalid amount");
      return 0.0f;
   }
   else {
      printf("deposited $%.2f\n", amount);
      return amount;
   }
   return 0.0f;
}
float withdraw(float balance) {
   float amount = 0.0f;
   printf("enter amount to withdraw: $");
   scanf("%f",&amount);
   if (amount < 0.01f) {
      printf("invalid amount\n");
      return 0.0f;
   }
   else if (amount > balance) {
      printf("Insufficient funds");
      return 0.0f;
   }

else {
      printf("Successfully withdrew $%.2f\n", amount);
      return amount;
   }
   return 0;
}