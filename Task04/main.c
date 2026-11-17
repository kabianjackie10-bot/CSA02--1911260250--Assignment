#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
static inline int square_int(int x) { return x * x; }
static inline int max_int(int a, int b) { return a > b ? a : b; }

int main(void)
{
    int a = 3, b = 7;
    printf("SQUARE(a + 1) macro = %d\n", SQUARE(a + 1));
    printf("square_int(a + 1) = %d\n", square_int(a + 1));
    printf("MAX(a, b) = %d\n", MAX(a, b));
    printf("max_int(a, b) = %d\n", max_int(a, b));
    return 0;
}
