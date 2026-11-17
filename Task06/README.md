# Task 06 – Read and Print Data Correctly

Student: Kabilan P | Register: 1911260250

Use matching format specifiers: %d for int, %u for unsigned int, %ld for long, %lld for long long, %f for float in printf, %lf for double in printf, %c for char and %s for a string. For scanf, use %f for float* and %lf for double*. A mismatched format specifier causes undefined behaviour in variadic calls.

Check scanf's return value before using input. If it does not equal the expected number of conversions, reject the input. For more robust recovery, read a line with fgets and parse it with strtol or sscanf. Parsing a line of length L takes O(L) time and needs O(L) buffer space; line-based parsing makes it easier to discard an invalid line safely.

For paise, display rupees as amount/100 and paise as amount%100, with a two-digit fractional part.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
