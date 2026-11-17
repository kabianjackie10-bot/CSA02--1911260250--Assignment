#include <stdio.h>
#include "billing.h"
#ifdef DEBUG
#define DEBUG_PRINT(x) printf x
#else
#define DEBUG_PRINT(x) ((void)0)
#endif
long fixed_charge(void) { return FIXED_CHARGE_PAISE; }
int main(void) {
    DEBUG_PRINT(("DEBUG: fixed charge = %ld paise\n", fixed_charge()));
    printf("Fixed charge: Rs %ld.%02ld\n", fixed_charge()/100, fixed_charge()%100);
    return 0;
}
