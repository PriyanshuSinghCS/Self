#include <stdio.h>

long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

long fact_nonrecursive(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
long binomial_coefficient(int n, int r) {
    long n_fact = fact_nonrecursive(n);
    long r_fact = fact_nonrecursive(r);
    long nr_fact = fact_nonrecursive(n - r);
    return n_fact / (r_fact * nr_fact);
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    printf("\nFactorial using recursion: %d! = %ld", n, fact_recursive(n));
    printf("\nFactorial using iteration: %d! = %ld\n", n, fact_nonrecursive(n));

    long C = binomial_coefficient(n, r);
    printf("\nBinomial Coefficient C(%d, %d) = %ld\n", n, r, C);
    printf("\nTable of Binomial Coefficients (C(n, r)):\n");
    printf("   n    r    C(n,r)\n");

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%4d %4d %8ld\n", i, j, binomial_coefficient(i, j));
        }
    }

    return 0;
}
