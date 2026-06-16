#include <stdio.h>

// To check perfect number
int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; 
        }
    }

    // Check if sum equals original number
    if (sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}
