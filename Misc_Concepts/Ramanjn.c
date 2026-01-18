#include <stdio.h>

int main() {
    int limit = 50; // you can change this limit
    int a, b, c, d;
    long sum1, sum2;

    printf("Ramanujan numbers up to %d:\n", limit);

    for (a = 1; a <= limit; a++) {
        for (b = a + 1; b <= limit; b++) {
            sum1 = (long)a * a * a + (long)b * b * b;

            for (c = a + 1; c <= limit; c++) {
                for (d = c + 1; d <= limit; d++) {
                    sum2 = (long)c * c * c + (long)d * d * d;

                    if (sum1 == sum2) {
                        printf("%ld = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}