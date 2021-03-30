#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of integers you want to allocate\n");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
       printf("Enter the values in dynamically allocated array\n");
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The values in ptr is %d\n", ptr[i]);
    }
    
     
    return 0;
}