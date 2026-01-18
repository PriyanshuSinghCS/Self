#include<stdio.h>
int febonacci(int n){
    if(n==1 || n==2) return 1;
    return febonacci(n-2)+febonacci(n-1); // Euler's Tree
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int num = febonacci(n);
    printf("%d",num);
    return 0;
}
