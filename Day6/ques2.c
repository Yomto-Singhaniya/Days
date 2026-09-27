// Create a program to using switch case to simulate a basic ATM menu, check Balance, deposit, width row and exit.
#include <stdio.h>

int main() {
printf("1. for Checking Balance\n");
printf("2. for deposit\n");
printf("3. for withrow\n");
printf("4. for Exit\n");
int balance=100000,deposit=0,withrow=0,num=0;
    printf("Enter you a num.");
    scanf("%d",&num);
    switch(num){
        case 1:printf("Balance= %d",balance);
        break;
        case 2:printf("Enter the Deposit amount= : ");
        scanf("%d",&deposit);
        balance+=deposit;
        printf("Balance= %d",balance);
        break;
        case 3:printf("Enter the Withrow Amount");
        scanf("%d",&withrow);
        balance-=withrow;
        printf("Balance= %d",balance);
        break;
        case 4:printf("You are Exit");
    }
return 0;
}