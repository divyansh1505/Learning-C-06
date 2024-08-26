#include <stdio.h>

typedef struct BankAccount{                 //used typedef function to give it a nickname 
    int BankAccountNumber;
    char AccountHolderName[100];
}acc;                                       //nickname given 

int main () {
    acc a1 = {123, "Divyansh"};
    acc a2 = {124, "Arnavi"};

    printf("Account owner is %s \n", a1.AccountHolderName);
    printf("Account number is %d \n", a1.BankAccountNumber);

    printf("Account owner is %s \n", a2.AccountHolderName);
    printf("Account number is %d \n", a2.BankAccountNumber);

return 0; 
}