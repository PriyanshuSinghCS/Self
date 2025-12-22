// Write a program to print out all Armstrong numbers between 1 and 500.

#include <stdio.h>

int main(){
    int y,j;
    int temp,sum;
    for(int i=1;i<=500;i++){
        j=i;
        int n = i;
        sum=0;
    while(n!=0){
    y=n%10;
        temp = y*y*y;
        sum = sum+temp;
        n=n/10;
    }
    if(j==sum)
    printf("%d ",j);
}
    
    return 0;
}