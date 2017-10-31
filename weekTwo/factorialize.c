#include <stdio.h>
#include <cs50.h>
#include <math.h>

long long factorialize(int num);

int main(void)
{
    printf("Number please: ");
    int input = get_int();
    printf("%lld\n", factorialize(input));
}

long long factorialize(int num)
{
  if (num < 1)
  {
    return 1;
  }
  else
  {
    return num * factorialize(num - 1);
  }
}

