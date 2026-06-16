#include <stdio.h>
int main() {
    int n, i, key, count = 0;
    scanf("%d", &n);        // size
    int a[n];
    for(i = 0; i < n; i++)  // input
        scanf("%d", &a[i]);
    scanf("%d", &key);  
    for(i = 0; i < n; i++)  // count frequency
        if(a[i] == key)
            count++;
    printf("Frequency = %d", count);
    return 0;
}
