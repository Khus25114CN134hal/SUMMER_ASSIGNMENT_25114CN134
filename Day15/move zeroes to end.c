#include <stdio.h>
int main() {
    int arr[100], n, i, j = 0, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Move non-zero elements forward
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;  // next position for non-zero
        }}
    printf("Array after moving zeroes:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
