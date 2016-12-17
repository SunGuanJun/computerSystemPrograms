#include <stdio.h>
#include <stdlib.h>

void show_ascii()
{
    unsigned int i;
    for (i=0; i<255; i++)
    {
        printf("%5c", i);
        if (i % 10 == 0)
            printf("\n");
    }
}
