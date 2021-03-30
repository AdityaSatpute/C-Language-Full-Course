#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample3.txt", "w");
    fprintf(ptr, "This is testing for printf\n");
    fputs("This is testing for fputs...\n", ptr);
    fclose(ptr);
    return 0;
}