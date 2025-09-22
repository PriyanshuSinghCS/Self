#include <stdio.h>

int main(){
    int Num;
    int i;
    int product;
    printf("Enter the NUMBER:\n");
    scanf("%d", &Num);
    printf("\n");
    for(i=1; i<=10; i++){
        product = Num*i;
        printf("%d * %d = %d\n",Num,i,product);
    }
    return 0;
}