// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>
int main(){
    char arr[20],brr[20];
    printf("Enter the binary number: ");
    scanf("%s",arr);
    int x = strlen(arr);
    for(int i=0;i<x;i++){
        if(arr[i]=='0') brr[i]='1';
        else if(arr[i]=='1') brr[i]='0';
    }
    brr[x] = '\0'; 
    printf("%s ",brr);
    return 0;
}