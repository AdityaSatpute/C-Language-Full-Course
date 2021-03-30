#include<stdio.h>

int main(){
    FILE *ptr;
    char buff[255];

    ptr = fopen("sample3.txt", "r");
    // fscanf(ptr, "%s\n", buff);

    fgets(buff, 255, ptr);
    fgets(buff, 255, ptr);

    printf("The value now in buff is %s\n", buff);
    printf("The value now in buff is %s\n", buff);
    // fscanf(ptr, "%s\n", buff);
    // printf("The value now in buff is %s\n", buff);

    fputs("This is a fputstring\n", ptr);
    fgets(buff, 255, ptr);
    return 0;
}