// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main(){
    int r;
    printf("Enter no of rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter no of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum,sumArr[r];
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum = sum+ arr[i][j];
        }
       sumArr[i]=sum; 
    }
    printf("Array:\n");
    for(int i=0;i<r;i++){
        printf("%d ",sumArr[i]);
    }

    return 0;
}