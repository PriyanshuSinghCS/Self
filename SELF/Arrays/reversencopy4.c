#include <stdio.h>
void reverse(int arr[],int i,int j){ // reverse part of array
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int i,j;
    printf("Enter the value of index from which to reverse: ");
    scanf("%d",&i);
    printf("Enter the value of index till which to reverse: ");
    scanf("%d",&j);
    printf("arr[7]:");
    reverse (arr,i,j);
    for(int i=0;i<=6;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}