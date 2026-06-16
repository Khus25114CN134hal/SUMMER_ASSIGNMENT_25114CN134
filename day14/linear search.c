#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    scanf("%d", &n);    // array size
    int a[n];
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    scanf("%d", &key);    // element to search
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at position %d", i + 1);
            found = 1;
            break;  }}
    if(!found)
        printf("Not found");
    return 0;
}
