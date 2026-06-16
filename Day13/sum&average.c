#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, avg;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    // Input and sum calculation
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
