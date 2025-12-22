// Print all alphabet(capital) and their corresponding ASCII values usin a loop.

#include <stdio.h>

int main(){
    int x = 65;
    for(int i=1;i<=26;i++){
        char ch = (char)x;
        printf("%c = %d\n",ch,x);
        x=x+1;
    }
    return 0;
}