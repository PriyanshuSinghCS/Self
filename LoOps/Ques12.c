// Print the factorials of first 'n' numbers.

#include <stdio.h>

int main(){
     int n;
     int product = 1;
     printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int j = i;j>0;j--){
        product = product*j;
    }
    printf("Factorial of %d is: %d\n",i,product);
    product = 1;
    }
    return 0;
}