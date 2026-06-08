#include<stdio.h>
int rev=0, base=1;
void reverse(int n)
{
    if(n==0)
        return;
    rev=rev + (n%10)*base;
    base=base*10;
    reverse(n/10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    reverse(n);
    printf("Reversed: %d\n", rev);
    return 0;
}
