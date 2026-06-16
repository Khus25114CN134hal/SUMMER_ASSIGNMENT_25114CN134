#include <stdio.h>
// Function to calculate sum of two numbers
int sum(int a, int b) {
    return a + b; 
}
int main() {
    int num1, num2, result;
    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("Sum = %d", result);
    return 0;
}
