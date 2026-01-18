#include <stdio.h>

int main(){
    int x= 4,y,z;
    y=--x; // pahle x me 3 jaiga fir y me 3 jaiga
    z=x--; // pahle y me 3 jaega fir x me 2 jaiega
    printf("x = %d y = %d z = %d",x,y,z);
    return 0;
}