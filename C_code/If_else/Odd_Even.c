#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("....Please enter a valid positive number....");
    }
    else if (a % 2 != 0)
    {
        printf("The number %d is odd", a);
    }
    else
        printf("The number %d is even", a);
}