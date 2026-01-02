// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main(){
    int x,y,temp,reversed_num=0;
    printf("Enter the number: ");       
    scanf("%d",&x);
    int Original_num=x;
    for(int i=0;x!=0;i++){
        y=x%10;
        temp=y;
        x=x/10;
        reversed_num=reversed_num*10;
        reversed_num = reversed_num+temp;
    }
    if(reversed_num==Original_num) printf("The given number is a palindrome.");
    else printf("The given number is NOT a palindrome.");
    return 0;
}