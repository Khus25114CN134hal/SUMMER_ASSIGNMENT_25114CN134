#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    int i;
    // 0 and 1 are not prime
    if (n <= 1)
        return 0;
    // Check divisibility
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("Prime number");
    else
        printf("Not a prime number");
    return 0;
}
