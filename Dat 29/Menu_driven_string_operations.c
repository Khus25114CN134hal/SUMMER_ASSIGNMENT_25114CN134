#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find length\n");
        printf("2. Reverse string\n");
        printf("3. Convert to uppercase\n");
        printf("4. Convert to lowercase\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Length: %lu\n", strlen(str));
        } else if (choice == 2) {
            char rev[100];
            int len = strlen(str);
            for (int i = 0; i < len; i++)
                rev[i] = str[len - 1 - i];
            rev[len] = '\0';
            printf("Reversed: %s\n", rev);
        } else if (choice == 3) {
            char upper[100];
            strcpy(upper, str);
            for (int i = 0; upper[i]; i++)
                upper[i] = toupper(upper[i]);
            printf("Uppercase: %s\n", upper);
        } else if (choice == 4) {
            char lower[100];
            strcpy(lower, str);
            for (int i = 0; lower[i]; i++)
                lower[i] = tolower(lower[i]);
            printf("Lowercase: %s\n", lower);
        }
    } while (choice != 5);

    return 0;
}
