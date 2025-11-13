#include <stdio.h>

int main(){
    int rows=4;
    int c,r;
    for(r=0; r<=rows; r++){
        for(c=0; c<=rows-r; c++){
                printf(" ");
        }
        int number=1;
        for(c=0; c<=r; c++){
            printf("%d ",number);
            number = number * (r - c) / (c + 1);
        }   
        printf("\n");
    }
    return 0;
}