#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cost price of item:");
    scanf("%d", &cp);
    printf("Enter the selling price of item:");
    scanf("%d", &sp);
    if (cp == sp)
    {
        printf("No profit , No Loss");
    }
    if (cp < sp)
    {
        printf("Net Profit of %d ", sp - cp);
    }
    if (cp > sp)
    {
        printf("Net Loss of %d", cp - sp);
    }
}