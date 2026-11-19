#include <stdio.h>
int main()
{
    int n;
    printf("Enter n upto which you want to print odd numbers.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2)
    {
        printf("\n%d", i);
    }
}