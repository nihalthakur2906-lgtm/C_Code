#include <stdio.h>
int main() {
    int dividend, divisor, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit with error code
    }

    remainder = dividend % divisor;

    printf("Remainder = %d\n", remainder);

    return 0;
}