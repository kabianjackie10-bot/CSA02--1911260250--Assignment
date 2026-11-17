# Task 01 – Understand the Problem and Identify the Data

Student: Kabilan P | Register: 1911260250

Inputs: previous meter reading, current meter reading, household number and category. Outputs: units consumed, energy charge, fixed charge and total bill. The household number identifies the account; category is needed if tariffs differ by category. Readings are whole numbers within the stated 16-bit meter range 0–65535. Money should be represented in integer paise so that ₹2.25 is 225 paise and ₹50.00 is 5000 paise.

Constants include the register maximum (65535), register modulus (65536), slab limits, rates and fixed charge. A valid bill must not be negative, and total bill must equal fixed charge plus energy charge. Assumptions: readings are valid readings from the same meter; a decrease is accepted as rollover only under the stated 16-bit register rule; invalid input is rejected.

Alternative: readings as text such as "01530" preserve leading zeroes and need digit validation. Converting d digits takes O(d) time and O(d) temporary buffer space. Comparing fixed-width integer readings is O(1) time and O(1) space per value.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
