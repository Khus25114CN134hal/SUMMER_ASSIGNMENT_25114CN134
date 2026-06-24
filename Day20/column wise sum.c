#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, sum;
    scanf("%d%d", &r, &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    // Column-wise sum
    for(j = 0; j < c; j++) {
        sum = 0;
        for(i = 0; i < r; i++)
            sum += a[i][j];
        printf("Col %d = %d\n", j+1, sum);
    }
    return 0;
}
