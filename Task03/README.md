# Task 03 – Define the Constants

Student: Kabilan P | Register: 1911260250

Use named macros for the supplied tariff: SLAB1_UNITS=100, SLAB2_UNITS=200, RATE1_PAISE=0, RATE2_PAISE=225, RATE3_PAISE=450 and FIXED_CHARGE_PAISE=5000L. A tariff revision then changes one definition rather than many expressions.

#define performs preprocessor substitution and does not create a typed variable. const variables have type and scope and can be visible to a debugger. enum is appropriate for named integral constants. Macros should use uppercase descriptive names.

Expected checks for the supplied program: 0 units → ₹50.00; 100 → ₹50.00; 150 → ₹162.50; 200 → ₹275.00; 350 → ₹950.00. Change RATE2_PAISE to 230 and rerun to confirm the middle-slab bills change consistently.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
