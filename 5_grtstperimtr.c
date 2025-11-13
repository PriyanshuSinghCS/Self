#include <stdio.h>

int main() {
    float len1, br1, len2, br2, len3, br3;
    float p1, p2, p3;
    printf("Enter dimensions for Rectangle 1\n");
    printf("Enter length:\n");
    scanf("%f", &len1);
    printf("Enter breadth:\n");
    scanf("%f", &br1);

    printf("\nEnter dimensions for Rectangle 2\n");
    printf("Enter length:\n");
    scanf("%f", &len2);
    printf("Enter breadth:\n");
    scanf("%f", &br2);
    
    printf("\nEnter dimensions for Rectangle 3\n");
    printf("Enter length:\n");
    scanf("%f", &len3);
    printf("Enter breadth:\n");
    scanf("%f", &br3);
    p1 = 2 * (len1 + br1);
    p2 = 2 * (len2 + br2);
    p3 = 2 * (len3 + br3);
    printf("\nPerimeter of Rectangle 1: %.2f\n", p1);
    printf("Perimeter of Rectangle 2: %.2f\n", p2);
    printf("Perimeter of Rectangle 3: %.2f\n", p3);

    float maxPerimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
    int largestRectangleNum = (maxPerimeter == p1) ? 1 : ((maxPerimeter == p2) ? 2 : 3);
    printf("Result: Rectangle %d has the highest perimeter with a value of %.2f.\n", largestRectangleNum, maxPerimeter);

    return 0;
}