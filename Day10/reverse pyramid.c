#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; // level of pyramid

    for(i = rows; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
    // move to next line
        printf("\n");
    }

    return 0;
}
