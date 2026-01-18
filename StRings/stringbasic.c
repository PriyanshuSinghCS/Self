// #include <stdio.h>

// int main(){
//     char arr[4] = {'a','t','l','a'};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     printf("%p\n",&arr[3]);
//     printf("%c",arr[1]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     char ch = '9';
//     int x = (int)ch;
//     int x = ch - '0';  // gives 9
//     printf("%d",x);
//     return 0;
// }
#include <stdio.h>

int main(){
    char arr[] = {'H','e','l','l','o'};
    // char ch = '\0';
    // int x = 0;
    // char a = (char)x;
    // printf("%c",a);
    int i = 0;
    while(arr[i]!='\0'){
        //printf("%d\n",arr[i]); //ASCII value of all charecters will be printed
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}