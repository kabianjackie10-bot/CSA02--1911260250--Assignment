#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("sizeof(int)=%zu INT_MAX=%d\n", sizeof(int), INT_MAX);
    printf("sizeof(long)=%zu LONG_MAX=%ld\n", sizeof(long), LONG_MAX);
    printf("sizeof(long long)=%zu LLONG_MAX=%lld\n", sizeof(long long), LLONG_MAX);
    printf("sizeof(float)=%zu FLT_DIG=%d\n", sizeof(float), FLT_DIG);
    printf("sizeof(double)=%zu DBL_DIG=%d\n", sizeof(double), DBL_DIG);
    return 0;
}
