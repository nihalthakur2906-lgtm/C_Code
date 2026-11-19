#include <stdio.h>
int main()
{
    int n;
    printf("Enter n upto which you want to print numbers.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n%d", i);
    }
}