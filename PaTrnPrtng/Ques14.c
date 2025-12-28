// WAP to print following pattern.

// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>

int main(){
    int n;
    int x=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",x);
            x++;
            if(j==i) break;
        }
        printf("\n");
    }
    return 0;
}