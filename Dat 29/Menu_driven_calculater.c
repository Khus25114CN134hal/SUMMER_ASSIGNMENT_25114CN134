#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            switch (choice) {
                case 1:
                    result = a + b;
                    printf("Result: %.2f\n", result);
                    break;
                case 2:
                    result = a - b;
                    printf("Result: %.2f\n", result);
                    break;
                case 3:
                    result = a * b;
                    printf("Result: %.2f\n", result);
                    break;
                case 4:
                    if (b == 0)
                        printf("Error: Division by zero!\n");
                    else {
                        result = a / b;
                        printf("Result: %.2f\n", result);
                    }
                    break;
            }
        }
    } while (choice != 5);

    return 0;
}
