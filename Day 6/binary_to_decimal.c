#include<stdio.h>
int main()
{
    int n, decimal=0, base=1, temp;
    printf("Enter binary number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0)
    {
        int last=temp%10;
        decimal=decimal+last*base;
        base=base*2;
        temp=temp/10;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
