// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main(){
    int x,y,count=0,temp;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x;
    int orig_num = x;
    for(int i=0;x!=0;i++){
        x=x/10;
        count ++;
    }
    for(int i=0;y!=0;i++){
        temp=y%10;
        sum = sum + round(pow(temp, count));
        printf("%d\n",sum);
        y=y/10;

    }
    if(orig_num==sum) printf("It is an Armstrong number.");
    else printf("It is NOT an Armstrong number.");
    return 0;
}