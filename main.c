#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    List* post = init();

    printf("%p\n", post);
    return 0;
}
