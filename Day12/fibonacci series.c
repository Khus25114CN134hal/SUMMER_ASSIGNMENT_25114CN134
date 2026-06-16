#include <stdio.h>

// To print Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, next, i;

    printf("Fibonacci Series: %d %d ", a, b);


    for (i = 2; i < n; i++) {
        next = a + b;   
      printf("%d ", next);

        a = b; 
        b = next;
    }
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
