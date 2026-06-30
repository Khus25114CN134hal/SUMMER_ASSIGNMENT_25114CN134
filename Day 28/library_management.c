#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int isIssued;
};

int main() {
    struct Book books[50];
    int n, choice;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        books[i].id = i + 1;
        books[i].isIssued = 0;
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", books[i].title);
        printf("Enter author: ");
        scanf(" %[^\n]", books[i].author);
    }

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Display all books\n");
        printf("2. Issue a book\n");
        printf("3. Return a book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nID\tTitle\tAuthor\tStatus\n");
            for (int i = 0; i < n; i++)
                printf("%d\t%s\t%s\t%s\n", books[i].id, books[i].title, books[i].author,
                       books[i].isIssued ? "Issued" : "Available");
        } else if (choice == 2) {
            int id;
            printf("Enter book ID to issue: ");
            scanf("%d", &id);
            if (id >= 1 && id <= n) {
                if (books[id - 1].isIssued)
                    printf("Book already issued.\n");
                else {
                    books[id - 1].isIssued = 1;
                    printf("Book issued successfully.\n");
                }
            }
        } else if (choice == 3) {
            int id;
            printf("Enter book ID to return: ");
            scanf("%d", &id);
            if (id >= 1 && id <= n) {
                books[id - 1].isIssued = 0;
                printf("Book returned successfully.\n");
            }
        }
    } while (choice != 4);

    return 0;
}
