#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is equal to: ");
    int x = get_int();
    printf("y is equal to: ");
    int y = get_int();

    printf("%i plus %i equals: %i\n", x, y, x + y);
    printf("%i minus %i equals: %i\n", x, y, x - y);
    printf("%i times %i equals: %i\n", x, y, x * y);
    printf("%i divided %i equals: %i\n", x, y, x / y);
    printf("the remainder of %i divided %i equals: %i\n", x, y, x % y);
}