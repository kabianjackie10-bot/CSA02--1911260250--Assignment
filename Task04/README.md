# Task 04 – Use Macros Safely

Student: Kabilan P | Register: 1911260250

Fully parenthesise macro arguments and the complete expression: #define SQUARE(x) ((x) * (x)). Without parentheses, SQUARE(a+1) can expand with incorrect operator precedence. Even the parenthesised version can evaluate an argument twice, so SQUARE(i++) is unsafe. MAX(a,b) can also evaluate an argument more than once; MAX(i++,j) may cause side effects.

Use gcc -E to inspect preprocessor expansion. A static inline function can provide type checking and evaluate each argument once. For a fixed arithmetic operation both macro and inline-function work are O(1). A macro used at k locations may duplicate expanded code, potentially O(k) code size; actual compiler inlining is optimisation-dependent.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
