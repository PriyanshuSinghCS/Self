// #include <stdio.h>

// int main(){
//     int arr[5] = {2,4,6,8,1};
//     arr[4] = 100; // array changed  to {2,4,6,8,100}
//     printf("%d",arr[5]);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int arr[5] = {2,4,6,8,1};
//     for(int i = 0; i<=4;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main(){
    int arr[5]; //iska mtlb hai ki hamne arr name ka ek array bana diya jiska size 5 hai
    for(int i = 0; i<=4;i++){
        printf("Enter arr[%d]: ",i);
        scanf("%d",&arr[i]);        
    }
    printf("Array values: ");
    for(int x = 0; x<=4;x++){
        printf("%d ",arr[x]);
    }
    return 0;
}