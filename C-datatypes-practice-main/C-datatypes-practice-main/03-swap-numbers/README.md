# 3. Swap Two Numbers

## Problem Statement
Write a C program to swap 2 numbers.

## Concept Covered
- Integer variables
- Swapping using a temporary/third variable

## How It Works
1. Initializes `a = 5` and `b = 10`.
2. Prints values before swapping.
3. Uses a temporary variable `c` to swap `a` and `b`.
4. Prints values after swapping.

## Sample Run
```
Before Swap : 5 10
After swap : 10 5
```

## Compile & Run
```bash
gcc main.c -o swap
./swap
```

## Notes / Possible Improvements
- Could be extended to accept user input via `scanf` instead of hardcoded values.
- Can also be done without a temporary variable using arithmetic or XOR swap.
