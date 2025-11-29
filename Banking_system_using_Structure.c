//Write a program to implement a simple banking system using structures in C.
// The program should contain cusdtomer dertails, deposit money, withdraw money, and check their balance.
#include <stdio.h>
#include <string.h>                                                         
struct BankAccount {
    char name[50];
    int accountNumber;
    float balance;
};
void deposit(struct BankAccount *account, float amount) {
    account->balance += amount;
    printf("Deposited: %.2f\n", amount);
}
void withdraw(struct BankAccount *account, float amount) {
    if (amount > account->balance) {
        printf("Insufficient balance!\n");
    } else {
        account->balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
}
void checkBalance(struct BankAccount account) {
    printf("Account Holder: %s\n", account.name);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Current Balance: %.2f\n", account.balance);
}
int main() {
    struct BankAccount account;
    float amount;
    
    // Initialize account details
    printf("Enter account holder name: ");
    fgets(account.name, sizeof(account.name), stdin);
    account.name[strcspn(account.name, "\n")] = 0; // Remove newline character
    printf("Enter account number: ");
    scanf("%d", &account.accountNumber);
    account.balance = 0.0; // Initial balance

    int choice;
    do {
        printf("\nBanking System Menu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 3:
                checkBalance(account);
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}