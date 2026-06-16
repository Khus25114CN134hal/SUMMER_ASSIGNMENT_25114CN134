#include <stdio.h>
#include <math.h>

// To check Armstrong number
int isArmstrong(int num) {
    int original = num;
    int remainder, result = 0;
    int n = 0;
    int temp = num;

    // Count number of digits
    while (temp != 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;

    // Calculate sum of digits raised to power n
    while (temp != 0) {
        remainder = temp % 10;        
        result += pow(remainder, n);  
        temp = temp / 10;           
    }

    // Check Armstrong condition
    if (result == original)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
