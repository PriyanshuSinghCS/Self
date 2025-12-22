// print factorial of given number n

#include <stdio.h>

int main(){
     int n;
     int product = 1;
     printf("Enter number: ");
    scanf("%d",&n);
for(int i = n;i>0;i--){
    product = product*i;
}
printf("Factorial of %d is: %d",n,product);
    return 0;
}