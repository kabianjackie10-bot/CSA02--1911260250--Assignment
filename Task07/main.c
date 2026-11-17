#include <stdio.h>
int main(void)
{
    printf("5 / 2 = %d\n", 5 / 2);
    printf("5.0 / 2 = %.1f\n", 5.0 / 2);
    printf("(int)3.9 = %d\n", (int)3.9);
    printf("(int)10000000000L is implementation-dependent when out of range; do not rely on it.\n");
    return 0;
}
