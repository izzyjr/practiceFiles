#include <stdio.h>

int main(void)
{
    double imprecision = 42.0 / 3.0;
    printf("%.1000f\n", imprecision);
}