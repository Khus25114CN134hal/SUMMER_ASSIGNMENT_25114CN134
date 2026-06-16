#include <stdio.h>
#include <limits.h>
int main() {
    int n, i;
    int max = INT_MIN, second = INT_MIN;
    scanf("%d", &n);  
    int a[n];
    for(i = 0; i < n; i++) // input
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] > max) {
            second = max;  // update second max
            max = a[i];    // update max
        }
        else if(a[i] > second && a[i] != max) {
            second = a[i];  } }
    printf("Second largest = %d", second);
    return 0;
}
