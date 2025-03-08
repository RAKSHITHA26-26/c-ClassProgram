#include <stdio.h>

void view_passbook() {
    FILE *file = fopen("example.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    // Display the contents of the passbook (file)
    printf("\nPassbook Contents:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Print each character
    }

    fclose(file);
}

int main() {
    int i, j;
    int option;

    // Display a menu for the user
    printf("Choose an option:\n");
    printf("1. View Passbook\n");
    printf("2. Add Credit and Debit\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    if (option == 1) {
        view_passbook();  // Call the function to view the passbook
    } else if (option == 2) {
        // Open the file for appending (adding new transactions)
        FILE *file = fopen("example.txt", "a");
        if (file == NULL) {
            printf("Error opening file for writing.\n");
            return 1;
        }

        // Ask for user input
        printf("Enter credit money: ");
        scanf("%d", &i);
        printf("Enter debit money: ");
        scanf("%d", &j);

        // Write data to the file

        fprintf(file, "Credit money: %d\n", i);
        fprintf(file, "Debit money: %d\n", j);

        fclose(file);

        printf("Data written to file successfully.\n");
    } else {
        printf("Invalid option.\n");
    }

    return 0;
}
