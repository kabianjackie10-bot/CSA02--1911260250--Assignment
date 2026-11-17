#include <stdio.h>
int main(void)
{
    int units;
    long bill_paise;
    if (scanf("%d", &units) != 1 || units < 0) {
        fprintf(stderr, "Invalid units input\n");
        return 1;
    }
    bill_paise = 5000L; /* example fixed charge only */
    printf("Units: %d\nBill: Rs %ld.%02ld\n", units,
           bill_paise / 100, bill_paise % 100);
    return 0;
}
