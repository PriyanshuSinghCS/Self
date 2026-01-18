#include <stdio.h>

int main(){
    int side1,side2,side3;
    printf("Enter length of sides of the triangle.\n");
    scanf("%d %d %d", &side1,&side2,&side3);
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2){
        printf("Triangle is VALID");
    if(side1 == side2 && side2 == side3){
        printf("\nAnd it is an EQUILATERAL triangle.");
    }
    else if(side1 == side2 && side3 != side1){
        printf("\nAnd it is an ISOSCELES triangle.");
    }
    else if(side2 == side3 && side1 != side2){
        printf("\nAnd it is an ISOSCELES triangle.");
    }
    else if(side1 == side3 && side3 != side2){
        printf("\nAnd it is an ISOSCELES triangle.");
    }
    else if(side1 != side2 && side2 != side3 && side3 != side1){
        printf("\nAnd it is an SCALENE triangle.");
    }
}
else{
    printf("Triangle is not valid.");
}
    return 0;
}