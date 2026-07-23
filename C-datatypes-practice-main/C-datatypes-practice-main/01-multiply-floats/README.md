# 1. Multiply Two Floating Point Numbers

## Problem Statement
Write a C program to multiply 2 floating point numbers.

## Concept Covered
- `float` data type
- Reading floats with `scanf("%f", ...)`
- Basic arithmetic operators

## How It Works
1. Prompts the user for two numbers.
2. Reads them into `float` variables `a` and `b`.
3. Multiplies them and prints the product using `%f`.

## Sample Run
```
Enter the first number : 3.5
Enter the Second number : 2.0
The product is : 7.000000
```

## Compile & Run
```bash
gcc main.c -o multiply
./multiply
```

## Notes / Possible Improvements
- Output can be restricted to 2 decimal places using `%.2f` instead of `%f`.
