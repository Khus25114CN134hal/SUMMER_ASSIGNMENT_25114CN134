#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    // Input array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    // Display array
    printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
