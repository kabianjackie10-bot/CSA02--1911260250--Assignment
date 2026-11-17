# Task 05 – Header Files and Conditional Compilation

Student: Kabilan P | Register: 1911260250

Place shared constants and function prototypes in billing.h with include guards (#ifndef BILLING_H / #define BILLING_H / #endif). Put function definitions in .c files and main() in the driver file. Use #include <stdio.h> for a system header and #include "billing.h" for a project header.

Use #ifdef DEBUG around diagnostic printf statements and compile with -DDEBUG to enable them. With #ifdef DEBUG, diagnostic statements are excluded from a normal build. A run-time debug flag retains the branch and debug code in the executable and checks the flag when reached. Both approaches have O(1) test overhead per diagnostic site at run time when present.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
