#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item items[50];
    int n = 0, choice;

    do {
        printf("\n--- Inventory Management Menu ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Update Quantity\n");
        printf("4. Search Item\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            items[n].id = n + 1;
            printf("Enter item name: ");
            scanf("%s", items[n].name);
            printf("Enter quantity: ");
            scanf("%d", &items[n].quantity);
            printf("Enter price: ");
            scanf("%f", &items[n].price);
            n++;
            printf("Item added.\n");
        } else if (choice == 2) {
            printf("\nID\tName\tQty\tPrice\n");
            for (int i = 0; i < n; i++)
                printf("%d\t%s\t%d\t%.2f\n", items[i].id, items[i].name,
                       items[i].quantity, items[i].price);
        } else if (choice == 3) {
            int id, qty;
            printf("Enter item ID: ");
            scanf("%d", &id);
            printf("Enter new quantity: ");
            scanf("%d", &qty);
            if (id >= 1 && id <= n) {
                items[id - 1].quantity = qty;
                printf("Quantity updated.\n");
            }
        } else if (choice == 4) {
            char searchName[50];
            printf("Enter item name to search: ");
            scanf("%s", searchName);
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (strcmp(items[i].name, searchName) == 0) {
                    printf("Qty: %d, Price: %.2f\n", items[i].quantity, items[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Item not found.\n");
        }
    } while (choice != 5);

    return 0;
}
