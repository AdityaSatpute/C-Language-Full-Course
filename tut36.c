#include <stdio.h>

// target: 67,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1

int arrRev(int arr[]){
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
    
}
int arrPrint(int arr[]){
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    arrPrint(arr);
    arrRev(arr);
    printf("After reversing the array\n");
    arrPrint(arr);
    return 0;
}