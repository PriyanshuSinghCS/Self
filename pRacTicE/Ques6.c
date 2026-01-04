// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20];
    printf("Enter the number: ");
    scanf("%s", arr);
    int start_index = 0;
    if (arr[0] == '-')
        start_index = 1;
    int l = strlen(arr);
    int temp = arr[start_index];
    arr[start_index] = arr[l - 1];
    arr[l - 1] = temp;
    printf("%s", arr);
    return 0;
}