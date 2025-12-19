#include <stdio.h>

int main(){
    int x= 4,y,z;
    y=--x;
    z=x--;
    printf("x = %d y = %d z = %d",x,y,z);
    return 0;
}