#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number :");
    scanf("%d", &a);
    printf("Enter the number :");
    scanf("%d", &b);
    printf("Enter the number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest number", a);
    }
    if (b > a && b > c)
    {
        printf("%d is the greatest number", b);
    }
    if (c > a && c > b)
    {
        printf("%d is the greatest number", c);
    }
    if (a == b && b == c)
    {
        printf("All numbers are equal.");
    }
}
