// Read and print a matrix.

#include <stdio.h>

int main(){
    int row;
    printf("Enter no .of rows: ");
    scanf("%d",&row);
    int colns;
    printf("Enter the no. of columns: ");
    scanf("%d",&colns);
    int arr[row][colns];
    for(int i=0;i<row;i++){
        for(int j=0;j<colns;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<colns;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}