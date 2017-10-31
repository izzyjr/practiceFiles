#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool isPrime(int num);
int sumAllPrimes(int num);

int main(void)
{
    printf("Number please: ");
    int input = get_int();
    printf("%i\n", sumAllPrimes(input));
}

bool isPrime(int num)
{
    int count = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int sumAllPrimes(int num)
{
    int final = 0;
    for(int i = 2; i <= num; i++)
    {
        if(isPrime(i))
        {
            final = final + i;
        }
    }
    return final;
}