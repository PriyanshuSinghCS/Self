// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
#include <string.h>

int main() {
    char arr[20];
    int freq[10] = {0}; 
    
    printf("Enter the number: ");
    scanf("%s", arr);
    
    int n = strlen(arr);

    for (int i = 0; i < n; i++) {
        if(arr[i] >= '0' && arr[i] <= '9'){
            freq[arr[i] - '0']++;
        }
    }

    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
        }
    }

    printf("The digit(s) occurring most (%d times): ", maxCount);
    for (int i = 0; i < 10; i++) {
        if (freq[i] == maxCount && maxCount > 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}