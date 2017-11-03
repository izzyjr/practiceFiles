#include <stdio.h>
#include <cs50.h>


bool isPrime(int n);
int sumPrimes(int num);

int main(void)
{
    printf("isPrime(10) is %d\n", isPrime(10));
    printf("isPrime(2) is %d\n", isPrime(2));
}

bool isPrime(int n)
{
    for(int i = 2, max = (n / 2); i <= max; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int num)
{
    int sum = 0;
    for(int i = num; i >= 2; i--)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}