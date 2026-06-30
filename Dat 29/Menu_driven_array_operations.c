#include <stdio.h>

int main() {
    int arr[50], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Display array\n");
        printf("2. Find sum\n");
        printf("3. Find max\n");
        printf("4. Find min\n");
        printf("5. Sort array\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Array: ");
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 2) {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum: %d\n", sum);
        } else if (choice == 3) {
            int max = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > max) max = arr[i];
            printf("Max: %d\n", max);
        } else if (choice == 4) {
            int min = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] < min) min = arr[i];
            printf("Min: %d\n", min);
        } else if (choice == 5) {
            for (int i = 0; i < n - 1; i++)
                for (int j = 0; j < n - i - 1; j++)
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
            printf("Array sorted.\n");
        }
    } while (choice != 6);

    return 0;
}
