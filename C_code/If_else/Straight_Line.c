#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float m1, m2;
    printf("Enter the point (x1,y1) :");
    scanf("%d%d", &x1, &y1);
    printf("Enter the point (x2,y2) :");
    scanf("%d%d", &x2, &y2);
    printf("Enter the point (x3,y3) :");
    scanf("%d%d", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
        printf("All three points lie on the straight line.");
    else
        printf("The points don't lie on the straight line");
}