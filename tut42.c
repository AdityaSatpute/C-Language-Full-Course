#include<stdio.h>

int main(){
    void *ptr;
    int x = 10;
    ptr = &x;
    printf("The value of ptr is %d\n", *((int *)ptr)); // void pointer points to integer variable.
    return 0;
}