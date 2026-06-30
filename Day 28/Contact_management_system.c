#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice;

    do {
        printf("\n--- Contact Management Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter name: ");
            scanf("%s", contacts[n].name);
            printf("Enter phone number: ");
            scanf("%s", contacts[n].phone);
            n++;
            printf("Contact added.\n");
        } else if (choice == 2) {
            printf("\nName\tPhone\n");
            for (int i = 0; i < n; i++)
                printf("%s\t%s\n", contacts[i].name, contacts[i].phone);
        } else if (choice == 3) {
            char searchName[50];
            printf("Enter name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("Phone: %s\n", contacts[i].phone);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Contact not found.\n");
        }
    } while (choice != 4);

    return 0;
}
