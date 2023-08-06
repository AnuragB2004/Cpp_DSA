#include <stdio.h>
#include <stdlib.h>

struct Account
{
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount()
{
    struct Account newAccount;
    printf("\nEnter account number: ");
    scanf("%d", &newAccount.accountNumber);
    printf("Enter account holder name: ");
    scanf("%s", newAccount.name);
    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);

    FILE *file = fopen("accounts.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file.");
        return;
    }

    fprintf(file, "%d %s %.2f\n", newAccount.accountNumber, newAccount.name, newAccount.balance);
    fclose(file);

    printf("\nAccount created successfully!\n");
}

void creditAccount()
{
    int accountNumber;
    float amount;
    printf("\nEnter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to be credited: ");
    scanf("%f", &amount);

    FILE *file = fopen("accounts.txt", "r+");
    if (file == NULL)
    {
        printf("Error opening file.");
        return;
    }

    struct Account currentAccount;
    int found = 0;
    while (fscanf(file, "%d %s %f", &currentAccount.accountNumber, currentAccount.name, &currentAccount.balance) != EOF)
    {
        if (currentAccount.accountNumber == accountNumber)
        {
            currentAccount.balance += amount;
            found = 1;
            fseek(file, -sizeof(struct Account), SEEK_CUR);
            fprintf(file, "%d %s %.2f\n", currentAccount.accountNumber, currentAccount.name, currentAccount.balance);
            break;
        }
    }
    fclose(file);

    if (found)
        printf("\nAmount credited successfully!\n");
    else
        printf("\nAccount not found.\n");
}

void debitAccount()
{
    int accountNumber;
    float amount;
    printf("\nEnter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount to be debited: ");
    scanf("%f", &amount);

    FILE *file = fopen("accounts.txt", "r+");
    if (file == NULL)
    {
        printf("Error opening file.");
        return;
    }

    struct Account currentAccount;
    int found = 0;
    while (fscanf(file, "%d %s %f", &currentAccount.accountNumber, currentAccount.name, &currentAccount.balance) != EOF)
    {
        if (currentAccount.accountNumber == accountNumber)
        {
            if (currentAccount.balance >= amount)
            {
                currentAccount.balance -= amount;
                found = 1;
                fseek(file, -sizeof(struct Account), SEEK_CUR);
                fprintf(file, "%d %s %.2f\n", currentAccount.accountNumber, currentAccount.name, currentAccount.balance);
                break;
            }
            else
            {
                printf("\nInsufficient balance.\n");
                fclose(file);
                return;
            }
        }
    }
    fclose(file);

    if (found)
        printf("\nAmount debited successfully!\n");
    else
        printf("\nAccount not found.\n");
}

void probeBalance()
{
    int accountNumber;
    printf("\nEnter account number: ");
    scanf("%d", &accountNumber);

    FILE *file = fopen("accounts.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.");
        return;
    }

    struct Account currentAccount;
    int found = 0;
    while (fscanf(file, "%d %s %f", &currentAccount.accountNumber, currentAccount.name, &currentAccount.balance) != EOF)
    {
        if (currentAccount.accountNumber == accountNumber)
        {
            found = 1;
            printf("\nAccount holder name: %s\n", currentAccount.name);
            printf("Balance: %.2f\n", currentAccount.balance);
            break;
        }
    }
    fclose(file);

    if (!found)
        printf("\nAccount not found.\n");
}

void closeAccount()
{
    int accountNumber;
    printf("\nEnter account number: ");
    scanf("%d", &accountNumber);

    FILE *file = fopen("accounts.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.");
        return;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error opening file.");
        fclose(file);
        return;
    }

    struct Account currentAccount;
    int found = 0;
    while (fscanf(file, "%d %s %f", &currentAccount.accountNumber, currentAccount.name, &currentAccount.balance) != EOF)
    {
        if (currentAccount.accountNumber == accountNumber)
        {
            found = 1;
            continue;
        }
        fprintf(tempFile, "%d %s %.2f\n", currentAccount.accountNumber, currentAccount.name, currentAccount.balance);
    }
    fclose(file);
    fclose(tempFile);

    if (found)
    {
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");
        printf("\nAccount closed successfully!\n");
    }
    else
    {
        remove("temp.txt");
        printf("\nAccount not found.\n");
    }
}

void displayMenu()
{
    printf("\n********** Banking System **********\n");
    printf("1. Create Account\n");
    printf("2. Credit Amount\n");
    printf("3. Debit Amount\n");
    printf("4. Probe Balance\n");
    printf("5. Close Account\n");
    printf("6. Exit\n");
    printf("************************************\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;
    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount();
            break;
        case 2:
            creditAccount();
            break;
        case 3:
            debitAccount();
            break;
        case 4:
            probeBalance();
            break;
        case 5:
            closeAccount();
            break;
        case 6:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
