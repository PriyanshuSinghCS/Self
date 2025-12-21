// WAP to print given pattern.

// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>

int main(){
    int l;
    printf("Enter no of rows: ");
    scanf("%d",&l);
    for(int i=1;i<=l;i++ ){  
        for(int j=1;j<=l;j++){
            printf("%d ",j);
            if(j==i) break;
        }
        printf("\n");
    }
    return 0;
}