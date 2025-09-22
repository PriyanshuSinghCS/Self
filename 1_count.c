#include <stdio.h>

int main(){
    int num;
    int positive_count=0;
    int negative_count=0;
    int zero_count=0;
    char choice;
    do{
        printf("Enter number:\n");
        scanf("%d",&num);

        if(num < 0){
            negative_count++;
        }
        else if(num > 0){
            positive_count++;
        }
        else if(num == 0){
            zero_count++;
        }
        printf("Do you want to enter more nubers.\nwrite y or n:\n");
        scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y');

    printf("Count of POSITIVE number is: %d\n", positive_count);
    printf("Count of NEGATIVE number is: %d\n", negative_count);
    printf("Count of ZERO is: %d\n", zero_count);
    return 0;
}