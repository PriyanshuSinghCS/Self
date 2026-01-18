// Find the transpose of a matrix.

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
     
    printf("Orriginal Matrix: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transpose of the matrix:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}