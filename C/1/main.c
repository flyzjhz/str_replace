#include <stdio.h>
#include "str_replace.h"

int main()
{
    char name[] = "Hello, World!";
    char rep[]  = "World";
    char with[] = "There";
    char dest[10];

    char *res = str_replace(name, rep, with);

    printf("%s\n",res);

    return 0;
}