# Task 02 – Choose the Data Types

Student: Kabilan P | Register: 1911260250

Use unsigned short for the supplied 16-bit meter_t register, then verify sizeof and USHRT_MAX on the selected compiler. Use a sufficiently wide unsigned type for consumption and long long for aggregate paise after checking LLONG_MAX. Store individual money values as integer paise rather than float rupees. Integer paise avoids binary floating-point representation errors for tariffs already expressed in paise.

For a 16-bit counter, the modulus is 65536. A reading from 65400 to 120 consumes 65536 − 65400 + 120 = 256 units. Unsigned wraparound gives a non-negative result. Use sizeof, limits.h and float.h to record the actual system sizes/ranges; sizes are implementation-dependent.

Alternative: double rupees has O(1) addition time like integer paise, but decimal fractions may not be represented exactly. Round at a documented billing boundary; rounding error can accumulate as the number of bills increases.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
