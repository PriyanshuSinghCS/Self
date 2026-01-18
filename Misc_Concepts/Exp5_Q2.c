#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'A', 'B', 'C'};

    int *p1 = a;
    float *p2 = b;
    char *p3 = c;

    printf("Initial addresses:\n");
    printf("p1 (int)   = %p\n", p1);
    printf("p2 (float) = %p\n", p2);
    printf("p3 (char)  = %p\n\n", p3);
    p1++;
    p2++;
    p3++;

    printf("After increment:\n");
    printf("p1 (int)   = %p -> value = %d\n", p1, *p1);
    printf("p2 (float) = %p -> value = %.1f\n", p2, *p2);
    printf("p3 (char)  = %p -> value = %c\n\n", p3, *p3);
    p1--;
    p2--;
    p3--;

    printf("After decrement (back to original):\n");
    printf("p1 (int)   = %p -> value = %d\n", p1, *p1);
    printf("p2 (float) = %p -> value = %.1f\n", p2, *p2);
    printf("p3 (char)  = %p -> value = %c\n", p3, *p3);

    return 0;
}
