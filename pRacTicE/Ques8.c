// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main(){
    int n;
    float x=3;
    float num;
    float sum = 1;
    printf("Enter the no of terms: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        num = x/(x+1);
        sum = sum + num;
        x=x+2;
    }
    printf("Sum of series upto %d terms is: %0.2f",n,sum);
    return 0;
}