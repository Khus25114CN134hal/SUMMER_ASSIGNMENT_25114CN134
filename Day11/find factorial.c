#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
  return fact;
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial = %d", result);
    return 0;
}
