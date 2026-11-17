#include <stdio.h>
#include <limits.h>
#define SLAB1_UNITS 100
#define SLAB2_UNITS 200
#define RATE1_PAISE 0L
#define RATE2_PAISE 225L
#define RATE3_PAISE 450L
#define FIXED_CHARGE_PAISE 5000L

long long compute_bill_paise(unsigned int units)
{
    long long p = FIXED_CHARGE_PAISE;
    unsigned int s1 = units < SLAB1_UNITS ? units : SLAB1_UNITS;
    unsigned int s2 = units > SLAB1_UNITS
        ? (units < SLAB2_UNITS ? units - SLAB1_UNITS : SLAB2_UNITS - SLAB1_UNITS) : 0;
    unsigned int s3 = units > SLAB2_UNITS ? units - SLAB2_UNITS : 0;
    p += (long long)s1 * RATE1_PAISE;
    p += (long long)s2 * RATE2_PAISE;
    p += (long long)s3 * RATE3_PAISE;
    return p;
}

int main(void)
{
    unsigned int tests[] = {0, 100, 150, 200, 350};
    for (size_t i = 0; i < sizeof tests / sizeof tests[0]; ++i) {
        long long p = compute_bill_paise(tests[i]);
        printf("%u units -> Rs %lld.%02lld\n", tests[i], p / 100, p % 100);
    }
    return 0;
}
