#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    List* quart = init();

    for(int i = 0; i <= 20; i++){
        add(&quart, i, i* 2);
    }

    toString(quart);
    return 0;
}
