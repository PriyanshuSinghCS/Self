#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
   // if(b==1) return a;
    if(b%2==0){
    int x = powerlog(a,b/2);
    return x*x;
    }
    else if(b%2!=0){
        int x = powerlog(a,b/2);
        return x*x*a;
    }
}
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter Power: ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d raised to power %d is %d",a,b,p);
    return 0;
}