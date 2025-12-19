// WAP to count digits of a given number.

#include <stdio.h>

int main(){
    int x,i;
    int count = 0;
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=1;x!=0;i++){
        x=x/10;
        count++;
    }
    printf("Count of digits in the number is: %d",count);
    return 0;
}