// Add two matrices.

#include <stdio.h>

int main()
{
    int r1;
    printf("Enter no of rows of first matrix: ");
    scanf("%d", &r1);
    int c1;
    printf("Enter no of columns of first matrix: ");
    scanf("%d", &c1);
    int arr[r1][c1];
    int r2;
    printf("\nEnter no of rows of second matrix: ");
    scanf("%d", &r2);
    int c2;
    printf("Enter no of columns of second matrix: ");
    scanf("%d", &c2);
    int brr[r2][c2];
    if (r1 != r2 || c1 != c2)
    {
        printf("Error: Matrices distinct dimensions cannot be added.\n");
        return 1;
    }
    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    int x = r1;
    int y = c1;

    int sumOfmatrix[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            sumOfmatrix[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("Added matrix:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", sumOfmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}