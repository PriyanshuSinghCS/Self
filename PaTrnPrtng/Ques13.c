// WAP to print following pattern

// *       *
//   *   * 
//     *
//   *   *
// *       *

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i) printf("*");
            else if((j+i)==(n+1)) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}