#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Example configuration format: BASE_RATE_PAISE=225
   Peak premium is 20%. For production, validate every config field and timestamp. */
int main(void)
{
    long long base_rate_paise = 225;
    long long energy_wh = 1000; /* example interval: 1000 Wh = 1 kWh */
    int peak_hour = 1;          /* 1 means interval is in 18:00–22:00 */
    long long charge_paise;

    /* Example uses integer arithmetic: 1000 Wh = 1 kWh.
       Base charge in paise is 225. Peak charge = 225 * 120 / 100 = 270 paise. */
    charge_paise = (energy_wh * base_rate_paise) / 1000;
    if (peak_hour)
        charge_paise = (charge_paise * 120 + 50) / 100; /* nearest paise */

    printf("Energy: %lld Wh\n", energy_wh);
    printf("Peak period: %s\n", peak_hour ? "yes" : "no");
    printf("Charge: Rs %lld.%02lld\n", charge_paise / 100, charge_paise % 100);
    return 0;
}
