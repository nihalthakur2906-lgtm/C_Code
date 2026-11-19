#include <stdio.h>
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    printf("\nX=%d,Y=%d,Z=%d", x, y, z);
    return 0;
}