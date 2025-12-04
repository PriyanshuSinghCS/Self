#include <stdio.h>
#include <math.h>
#include <limits.h>
int main(){
    // float x = sqrt(2);
    // printf("%.2f",x);
    int x = INT_MAX; // 2147483647
    long a = LONG_MAX; // 2147483647
    long long b = __LONG_LONG_MAX__; // 9223372036854775807
    long z = 2147483649;
    long long y = 2147483649;
    printf("%d\n",x);
    printf("%ld\n",a);
    printf("%lld\n",b);
    printf("%ld\n",z);
    printf("%lld\n",y);
    return 0;
}