#include<stdio.h>

int add(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int a;
    int b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    int num = add(a, b);
    printf("The addition of these two numbers is %d\n", num);

    return 0;
}