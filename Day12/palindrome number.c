#include <stdio.h>

// To check whether a number is palindrome
int isPalindrome(int num) {
    int original = num;
    int reverse = 0;
    int remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10; 
    }

    // Check if original and reversed are same
    if (original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
