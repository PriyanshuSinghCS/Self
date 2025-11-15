#include <stdio.h>
int increasing(int x, int n){
    if(n==x){
        return x;
    }
    printf("%d\n",n);
    return increasing(x,n+1);
}
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int num = increasing(a,1);
    printf("%d",num);
    return 0;
}