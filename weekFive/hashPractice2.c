#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

#define SIZE 26

int hash_function(char* key)
{
    //uses first letter of string to determine a hash table index for string
    int hash = key[0] - 'a';


    // mod by size to stay w/in bound of table
    return hash % SIZE;
}

int main()
{
    // get key
    printf("Key: ");
    char* key = get_string();

    // calculate and print index
    printf("The string '%s' is mapped to index %i\n", key,
    hash_function(key));

    return 0;
}