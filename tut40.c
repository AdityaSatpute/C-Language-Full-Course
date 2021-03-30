#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The address of ptr is %d\n", *ptr);
    }
    else{
        printf("The pointer is a null pointer and it cannot be dereferenced\n");
    }

    return 0;
}