#include <stdio.h>
int decreasing(int x){
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