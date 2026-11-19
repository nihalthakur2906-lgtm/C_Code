#include <stdio.h>
int main()
{
    int n;
    printf("Enter n upto which you want this A.P.:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d,", i);
    }
}