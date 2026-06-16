#include <stdio.h>
int main() {
    int n, i, j, count, maxCount = 0, element;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        count = 1; // Count occurrence of arr[i]
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            element = arr[i]; // Store element with max frequency
        }}
    printf("Element with max frequency = %d", element);
    return 0;
}
