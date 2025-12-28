// WAP to print given pattern.

//       *
//       *
//   * * * * *
//       *
//       *

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number (Odd number like 5, 7): ");
    scanf("%d", &n);
    int center = (n / 2) + 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
           
            if(i == center || j == center){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}