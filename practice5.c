#include<stdio.h>

int main(){
    FILE *ptr;
    char str[255];
    ptr = fopen("myFile.txt", "r+");
    fputs("This is my another string\n", ptr);
    fputs("This is my another string\n", ptr);
    fclose(ptr);
    
    return 0;
}