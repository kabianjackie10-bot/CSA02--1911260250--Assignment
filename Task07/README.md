# Task 07 – Control Type Conversion and Precision

Student: Kabilan P | Register: 1911260250

Unexpected examples: 5/2 is 2 because both operands are integers; 5.0/2 is 2.5. Assigning 3.9 to int stores 3 because the fractional part is discarded. Casting a large long to int may lose information if the value is not representable.

Use integer paise for tariffs specified in paise. If a calculation creates fractional paise, state a rounding policy and apply it consistently at a defined boundary. A float-based solution can round at the end, but the intermediate values remain approximate. Both approaches use O(1) time per addition and O(1) space per accumulator; integer paise is exact for whole-paise amounts.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
