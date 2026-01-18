#include <stdio.h>
int decreasing(int x){ //int likhne ka matlab hai ki mai yaha ek integer value pass kar raha hu
    if(x==1){
        return 1;
    }
    printf("%d\n",x);
    
    return decreasing(x-1);
}
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int num = decreasing(a);
    printf("%d",num);
}