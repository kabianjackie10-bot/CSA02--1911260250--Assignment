# Task 12 – Day-4 Design Challenge – Re-evaluate and Adapt the Design

Student: Kabilan P | Register: 1911260250

Changed requirements: smart meters report watt-hours every 15 minutes (35,040 readings per house per year); usage between 6 PM and 10 PM costs 20% more; tariffs must change without recompilation.

Impact: a single 16-bit monthly reading is not enough for yearly cumulative energy. Use wide integer types for cumulative Wh and timestamps/interval metadata for time-of-day classification. Replace compile-time tariff macros with validated run-time configuration values. For 800,000 houses, 35,040 intervals per house means 28,032,000,000 household-interval records per year; this is a record count, not energy consumed.

Redesign: calculate interval consumption from consecutive readings, classify the interval by timestamp, apply the peak premium for eligible intervals, load base tariffs from a configuration file, and use a documented rounding policy. Test daytime and peak-hour use, zero consumption, rollover if the device register is bounded, invalid configuration, annual accumulation and totals at district scale. Defend the choice with calculations and actual execution evidence.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
