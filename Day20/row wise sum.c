#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sum;
    scanf("%d%d", &r, &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    // Row-wise sum
    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d = %d\n", i+1, sum);
    }
    return 0;
}
