#include<stdio.h>

int snakeWaterGun(char you, char comp){
    // returns 1 if you win and -1 if you lost and 0 if draw.
    if (you == comp){
        return 0;
    }
    else if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 's' && comp == 'g'){
        return -1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    
}

int main(){
    char you, comp;
    comp = 's';
    printf("Enter s for Snake, w for Water and g for Gun\n");
    scanf("%d", &you);
    int result = snakeWaterGun(you, comp);
    printf("%d\n", result);
    return 0;
}