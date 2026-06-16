#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; //for pyramid rows(levels)

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
