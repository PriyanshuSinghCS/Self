#include<stdio.h>
int stair(int n){
    if( n<=2 ) return n;
    return stair(n-2)+stair(n-1); // Euler's Tree
}
int main(){
    int n;
    printf("Enter number of steps: ");
    scanf("%d",&n);
    int num = stair(n);
    printf("%d",num);
    return 0;
}