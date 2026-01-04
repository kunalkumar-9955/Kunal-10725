#include <stdio.h>

/* Function to print numbers from 1 to N */
void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

/* Function to print even numbers up to N */
void printEvenNumbers(int n) {
    int i;
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

/* Function to print odd numbers up to N */
void printOddNumbers(int n) {
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int choice, n;

    printf("====== MENU ======\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");
    printf("==================\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        printf("Enter the value of N: ");
        scanf("%d", &n);
    }

    switch (choice) {
        case 1:
            printNumbers(n);
            break;

        case 2:
            printEvenNumbers(n);
            break;

        case 3:
            printOddNumbers(n);
            break;

        case 4:
            printf("Program exited successfully.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
}
