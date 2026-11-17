# Task 08 – Trace the Compilation Process

Student: Kabilan P | Register: 1911260250

Compilation stages: gcc -E main.c -o main.i produces preprocessed source; gcc -S main.c -o main.s produces assembly; gcc -c main.c -o main.o produces an object file; gcc main.o -o main links an executable. A compile-time error is a syntax/type error; a link-time error is a missing definition; a run-time error occurs during execution.

Use -Wall -Wextra and record actual warnings and how they were resolved. If a task's online compiler does not expose intermediate files, use a compiler that does or record that limitation. In a multi-file project, compile each .c file separately and link object files; changing one source file generally requires recompiling it and relinking.

## Run
Use an online C compiler. Paste `main.c`, compile, and run. Record the compiler name/version and actual output below.

## Actual output
TODO: Paste the output from your own execution and add a screenshot.
