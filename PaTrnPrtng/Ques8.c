// WAP to print the given pattern.

// A B C D
// A B C D
// A B C D
// A B C D

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x = 65;
        for(int j=1;j<=n;j++){
            char ch = (char) x;
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}