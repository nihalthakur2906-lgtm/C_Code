#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the point x");
    scanf("%d", &x);
    printf("Enter the point y");
    scanf("%d", &y);
    if (x == 0 && y == 0)
    {
        printf("The point %d,%d is the Origin.", x, y);
    }
    else if (y == 0)
    {
        printf("The point %d,%d lies on X-axis.", x, y);
    }
    else if (x == 0)
    {
        printf("The point %d,%d lies on Y-axis.", x, y);
    }
    else
    {
        printf("The point %d,%d does not lies on X-axis or Y-axis.", x, y);
    }
}