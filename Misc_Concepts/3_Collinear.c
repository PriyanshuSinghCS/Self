#include <stdio.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    int condition;
    printf("Let the three points are A,B and C\n");
    printf("Enter coordinates (x1,y1) of Point A:\n");
    printf("Enter x1:\n");
    scanf("%d", &x1);
    printf("Enter y1:\n");
    scanf("%d", &y1);
    printf("Enter coordinates (x2,y2) of Point B:\n");
    printf("Enter x2:\n");
    scanf("%d", &x2);
    printf("Enter y2:\n");
    scanf("%d", &y2);
    printf("Enter coordinates (x3,y3) of Point C:\n");
    printf("Enter x3:\n");
    scanf("%d", &x3);
    printf("Enter y3:\n");
    scanf("%d", &y3);
    condition = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(condition == 0){
        printf("\nAll Three Points are COLLINEAR.");
    }
    else{
        printf("\nPoints are non-collinear.");
    }
    return 0;
}