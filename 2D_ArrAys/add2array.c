#include <stdio.h>

int main(){
    
    int r;
    printf("Enter the no. of rows of Array: ");
    scanf("%d",&r);
    int c;
    printf("Enter the no. of columns of Array: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("\nEnter Elements of first Array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[r][c];
    printf("\nEnter Elements of second Array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int res[r][c];
    printf("\nSum of the Array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j] = arr[i][j]+brr[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}