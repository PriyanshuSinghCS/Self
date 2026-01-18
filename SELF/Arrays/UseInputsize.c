#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array: "); // this way of  enterin value of n is wrong
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<=n-1;i++){
        printf("arr [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
} 