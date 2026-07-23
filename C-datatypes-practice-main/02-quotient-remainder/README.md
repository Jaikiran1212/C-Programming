# 2. Compute Quotient and Remainder (2 Decimal Points)

## Problem Statement
Write a C program to compute quotient and remainder with 2 decimal points.

## Concept Covered
- `float` division
- Type casting (`float` to `int`)
- Manual remainder calculation using `a - (quotient * b)`

## How It Works
1. Reads two floating point numbers `a` and `b`.
2. Computes `division = a / b` for the quotient.
3. Casts the division result to `int` to get the whole-number quotient.
4. Computes the remainder as `a - (quotient * b)`.
5. Prints both results.

## Sample Run
```
Enter the first number : 10
Enter the Second number : 3
The division result is : 3.333333
The remainder is : 1.000000
```

## Compile & Run
```bash
gcc main.c -o quotient_remainder
./quotient_remainder
```

## Notes / Possible Improvements
- To strictly display "2 decimal points" as required by the problem statement, use `%.2f` in the `printf` format specifiers instead of `%f`.
