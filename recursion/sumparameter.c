#include<stdio.h>
void sum(int n, int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    sum(a,0);
    return 0;
}