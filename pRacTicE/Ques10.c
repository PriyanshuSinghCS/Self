// Find the maximum and minimum element in an array.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total no of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int x = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[0])
        {
            arr[0] = arr[i];
        }
    }
    printf("Maximum Element is: %d\n", x);
    printf("Minimum Element is: %d", arr[0]);
    return 0;
}