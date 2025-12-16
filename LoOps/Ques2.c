// WAP to check if a number is prime or not.

#include <stdio.h>

int main(){
    int x;
    int i;
    printf("Enter the number: ");
    scanf("%d",&x);
    if(x==2){
        printf("It is a prime number.");
        return 1;
    }
    for(i = 2;i<x;i++){
        if(x%i==0){
            printf("It is not a prime number.");
            break;
        }
    }
    if(i==x)
    printf("It is a prime number");

    return 0;
}