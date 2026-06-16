#include <stdio.h>
int main() {
    int n, i, j, found;
    scanf("%d", &n); 
    int a[n];
    for(i = 0; i < n; i++)  // input
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < i; j++)   // check already printed
            if(a[i] == a[j])
                found = 1;
        if(found) continue;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d ", a[i]); // duplicate element
                break;
            }  }  }
     return 0;
}
