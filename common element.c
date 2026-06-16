#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2], c[n1]; // c[] stores unique common elements

    printf("Enter elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                // Check duplicate in result array
                found = 0;
                for(int x = 0; x < k; x++) {
                    if(c[x] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    c[k++] = a[i]; // Store unique common element
            }
        }
    }

    printf("Common elements:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
