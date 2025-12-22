// Print first 'n' fibonnaci number.

#include <stdio.h>

int main(){
    int n,sum = 0;
    int a = 1, b= 1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        b = a;
        a = sum;
        sum = a+b;
        printf("%d ",sum);
    }
    return 0;
}