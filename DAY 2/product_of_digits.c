#include <stdio.h>

int main() {
    int n, product = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n != 0) {
        rem = n % 10;
        product *= rem;
        n /= 10;
    }
    printf("Product of digits: %d\n", product);
    return 0;
}