# 6. Display Multiple Variables (Mixed Data Types)

## Problem Statement
Write a C program to display the results of multiple mixed-type expressions.

**Sample Variables:**
```
a + c, x + c, dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
```

**Declaration:**
```c
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
```

## Concept Covered
- Implicit type conversion / promotion rules in C (`int`, `long`, `short`, `float`, `double`, `char`, `unsigned long`)
- Correct `printf` format specifiers per type (`%d`, `%f`, `%lf`, `%ld`, `%lu`, `%c`)
- Type casting with `(int)`

## How It Works
The program declares all the variables listed above and prints the result of each mixed-type expression, demonstrating how C automatically promotes smaller types to larger ones during arithmetic.

## Compile & Run
```bash
gcc main.c -o mixed_variables
./mixed_variables
```

## Known Issues in Current Code
1. `printf("\ndx + w = %lf", dx + x);` — the label says `dx + w` but the code actually computes `dx + x` (adding the `float x`, not the `char c`). If the intent is `dx + c`, change it to:
   ```c
   printf("\ndx + c = %lf", dx + c);
   ```
2. `printf("\ns + c = %d", s, c);` — passes an extra unused argument `c`. Since the format string only has one `%d`, `c` is silently ignored. Should be:
   ```c
   printf("\ns + c = %d", s + c);
   ```
3. `printf("\nax + c = %ld", ax, c);` — same issue: `c` is passed but not added to `ax` or used in the format string. Should be:
   ```c
   printf("\nax + c = %ld", ax + c);
   ```

## Notes / Possible Improvements
- Fixing the three issues above ensures each printed line actually reflects the expression named in its label.
