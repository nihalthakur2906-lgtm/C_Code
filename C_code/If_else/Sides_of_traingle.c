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
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Yes, %d,%d and %d can be sides of a triangle", a, b, c);
    }
    else
        printf("No,%d,%d and %d can't be sides of a triangle", a, b, c);
}