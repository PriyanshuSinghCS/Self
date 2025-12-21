// WAP to print the given pattern.

// 1
// 1 3
// 1 3 5
// 1 3 5 7

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter no. of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int k =1;
//         for(int j=k;j<=(i+k-1);j=j+2){
//             printf("%d ",j);
//             if(k==i) break;
//             k=k+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", 2 * j - 1);
        }
        printf("\n");
    }
    return 0;
}