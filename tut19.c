#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int Matric[3][3];
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", i);
        printf("Enter the elements of the array\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of Matrice array\n");
            scanf("%d", &Matric[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", Matric[i][j]);
        }
        
    }
    
    
    return 0;
}