#include <stdio.h>
int main() {
    int n, i, sum = 0, total;
    printf("Enter size (n-1 elements): ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter elements (from 1 to n with one missing):\n");
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // Sum of given elements
    }
    total = n * (n + 1) / 2;   // Sum of first n natural numbers
    printf("Missing number = %d", total - sum); // Difference gives missing
    return 0;
}
