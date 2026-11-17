#include <stdio.h>
#include <limits.h>

typedef unsigned short meter_t;

/* Unsigned arithmetic wraps modulo USHRT_MAX + 1 when meter_t is 16-bit. */
unsigned int consumption(meter_t previous, meter_t current)
{
    return (unsigned int)((meter_t)(current - previous));
}

int main(void)
{
    printf("sizeof(meter_t) = %zu bytes, maximum reading = %u\n",
           sizeof(meter_t), (unsigned)USHRT_MAX);
    printf("Consumption: %u units\n", consumption(1200, 1530));
    printf("Consumption: %u units\n", consumption(65400, 120));
    return 0;
}
