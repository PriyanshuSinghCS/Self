#include <stdio.h>

int main(){
    int year;
    long population=100000;
    int total_year;
    printf("Enter YEAR:\n");
    scanf("%d", &year);
    total_year=year-2011;
    for(int i=1; i<=total_year; i++){
    population=(population /10)+ population;
    }
    printf("Population in %d is %d.", year,population);
    return 0;
}