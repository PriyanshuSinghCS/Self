#include <stdio.h>

int main(){
    int rows=2;
    int c,r;
    int i=1;
    for(r=0; r<=rows; r++){
        for(c=0; c<=rows-r; c++){
                printf(" ");
        }
        for(c=0; c<=r; c++){
                printf("%d ",i);
                i++;
        }
            printf("\n");
    } 
    return 0;
}