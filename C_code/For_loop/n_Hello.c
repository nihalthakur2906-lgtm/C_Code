#include <stdio.h>
int main()
{
    int n;
    printf("Enter n upto which you want to print Hello.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        printf("\nHello");
    }
}