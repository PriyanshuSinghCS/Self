#include <stdio.h>
int add(int x, int y){
    int add = x+y;
    // printf("%d",sum);
    return add;
}
int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    add(a,b);
    int sum = add(a,b)/2;
    printf("%d",sum);
    return 0;
}