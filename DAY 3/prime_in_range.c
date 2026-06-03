#include <stdio.h>
int main() {
    int start, end, i, j, flag;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers: ");
    for (i = start; i <= end; i++) {
        flag = 1;
        if (i <= 1) flag = 0;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
