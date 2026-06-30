#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    printf("Enter account number: ");
    scanf("%d", &acc.accNo);
    printf("Enter name: ");
    scanf("%s", acc.name);
    printf("Enter initial balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n--- Bank Account Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Account Holder: %s\n", acc.name);
                printf("Balance: %.2f\n", acc.balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("New Balance: %.2f\n", acc.balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > acc.balance)
                    printf("Insufficient funds!\n");
                else {
                    acc.balance -= amount;
                    printf("New Balance: %.2f\n", acc.balance);
                }
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
