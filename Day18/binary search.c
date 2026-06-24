#include <stdio.h>
int main() {
    int a[100], n, i, key, low = 0, high, mid;
    printf("Enter size: ");
    scanf("%d", &n);
    // Sorted input
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    high = n - 1;
    // Binary search
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Not found");
    return 0;
}
