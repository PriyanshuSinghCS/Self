// Display this AP -> 1,3,5,7,9.... upto n terms.

#include <stdio.h>

int main(){
    int n;
    printf("Enter numbeer: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int AP = 1+(i-1)*2;
        printf("%d ",AP);
    }
    return 0;
}