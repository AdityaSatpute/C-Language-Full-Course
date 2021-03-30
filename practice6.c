#include <stdio.h>
// program for getting the whole content using fgetc and feof().

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("myFile.txt", "r");
    while (1)
    {
        c = fgetc(ptr);
        if (feof(ptr)){
            break;
        }
        printf("%c", c);
    }
    fclose(ptr);
    return 0;
}