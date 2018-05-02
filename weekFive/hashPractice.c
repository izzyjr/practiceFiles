#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int hash_function(char* key, int size)
{
    // sum ascii values
    bool pending = true;
    int count = 0;
    int hash = 0;
    while(pending)
    {
        if(key[count] != '\0')
        {
            hash = hash + key[count];
            count++;
        }
        else
        {
            pending = false;
        }

    }
    // mod by size to stay w/in bound of table
    return hash % size;
}

int main()
{
    // get hash table size
    printf("Hash table size: ");
    int size = get_int();

    // get key
    printf("Key: ");
    char* key = get_string();

    // calculate and print index
    printf("The string '%s' is mapped to index %i\n", key,
    hash_function(key, size));

    return 0;
}