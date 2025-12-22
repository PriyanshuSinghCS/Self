// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to power of another.

#include <stdio.h>

int main(){
    int product,x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);
    if(y==0){
        printf("1");
        return 1;
    }
    product=x;
    for(int i=1;i<y;i++){
        product = product*x;
    }
    printf("%d",product);
    return 0;
}