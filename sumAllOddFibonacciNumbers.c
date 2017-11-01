#include <cs50.h>
#include <stdio.h>
#include <math.h>

// int sumFibs(int num);
int fib(int num);

int main(void)
{
    printf("Number please: ");
    int input = get_int();
    printf("%i\n", fib(input));
}

// int sumFibs(int num)
// {
//     fib
//     while(num !<= fib)
//     {

//     }
// }

int fib(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return (fib(num - 2) + fib(num - 1));
    }
}