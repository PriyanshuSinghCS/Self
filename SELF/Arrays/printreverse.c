#include <stdio.h>

int main(){
    int arr[5];
    for(int i = 0; i<=4;i++){
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);        
    }
    printf("Array values in reverse:\n");
    for(int x = 4; x>=0;x--){
        printf("%d\n",arr[x]);
    }
    return 0;
}