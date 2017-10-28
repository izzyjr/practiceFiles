#include <cs50.h>
#include <stdio.h>

void cough(int n);
void say(string word, int n);
void sneeze(int n);

int main(void)
{
    printf("Number of times: ");
    int x = get_int();

    cough(x);
    sneeze(x);
}

void cough(int n)
{
    say("cough", n);
}

void say(string word, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}

void sneeze(int n)
{
    say("sneeze", n);
}