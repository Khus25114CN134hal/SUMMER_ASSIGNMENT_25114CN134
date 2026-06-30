#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    int isAvailable;
};

int main() {
    struct Book books[50];
    int n, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        books[i].id = i + 1;
        books[i].isAvailable = 1;
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
    }

    do {
        printf("\n--- Mini Library Menu ---\n");
        printf("1. Display books\n");
        printf("2. Borrow book\n");
        printf("3. Return book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < n; i++)
                printf("%d. %s [%s]\n", books[i].id, books[i].title,
                       books[i].isAvailable ? "Available" : "Borrowed");
        } else if (choice == 2) {
            int id;
            printf("Enter book ID to borrow: ");
            scanf("%d", &id);
            if (id >= 1 && id <= n && books[id - 1].isAvailable) {
                books[id - 1].isAvailable = 0;
                printf("Book borrowed.\n");
            } else
                printf("Book unavailable.\n");
        } else if (choice == 3) {
            int id;
            printf("Enter book ID to return: ");
            scanf("%d", &id);
            if (id >= 1 && id <= n) {
                books[id - 1].isAvailable = 1;
                printf("Book returned.\n");
            }
        }
    } while (choice != 4);

    return 0;
}
