#include <stdio.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

void printLowBalance(struct Customer customers[], int count) {
    printf("\n--- Customers with Balance Below Rs. 100 ---\n");
    printf("%-15s %-20s %-10s\n", "Account No.", "Name", "Balance");
    printf("------------------------------------------------\n");
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (customers[i].balance < 100) {
            printf("%-15d %-20s %-10.2f\n", customers[i].accountNumber, 
                   customers[i].name, customers[i].balance);
            found = 1;
        }
    }
    if (!found) {
        printf("No customers with balance below Rs. 100.\n");
    }
}

void processTransaction(struct Customer customers[], int count, int accountNumber, float amount, int code) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (customers[i].accountNumber == accountNumber) {
            found = 1;
            if (code == 1) {  
                customers[i].balance += amount;
                printf("\nDeposit successful. New balance: Rs. %.2f\n", customers[i].balance);
            } else if (code == 0) { 
                if (customers[i].balance >= amount) {
                    customers[i].balance -= amount;
                    printf("\nWithdrawal successful. New balance: Rs. %.2f\n", customers[i].balance);
                } else {
                    printf("\nThe balance is insufficient for the specified withdrawal.\n");
                }
            } else {
                printf("\nInvalid code. Use 1 for deposit, 0 for withdrawal.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("\nAccount number not found.\n");
    }
}

int main() {
    struct Customer customers[10] = {
        {1001, "A", 5000},
        {1002, "B", 50},
        {1003, "C", 15000},
        {1004, "D", 75},
        {1005, "E", 2500},
        {1006, "F", 90},
        {1007, "G", 8000},
        {1008, "H", 45},
        {1009, "I", 12000},
        {1010, "J", 3000}
    };

    int choice, accountNumber, code;
    float amount;

    while (1) {
        printf("\n--- Bank Customer Management System ---\n");
        printf("1. Print customers with balance below Rs. 100\n");
        printf("2. Deposit/Withdrawal\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printLowBalance(customers, 10);
        } else if (choice == 2) {
            printf("Enter account number: ");
            scanf("%d", &accountNumber);
            printf("Enter amount: ");
            scanf("%f", &amount);
            printf("Enter code (1 for deposit, 0 for withdrawal): ");
            scanf("%d", &code);
            processTransaction(customers, 10, accountNumber, amount, code);
        } else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}