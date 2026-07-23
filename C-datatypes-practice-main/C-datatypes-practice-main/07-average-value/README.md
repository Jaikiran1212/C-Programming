# 7. Average Value of Two Items (Weighted Average)

## Problem Statement
Write a C program that accepts two items' weight (floating point values) and number of purchases (floating point values), and calculates the average value of the items.

**Test Data:**
```
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
```

**Expected Output:**
```
Average Value = 19.444444
```

## Concept Covered
- `float` variables and arithmetic
- Weighted average formula: `((w1*i1) + (w2*i2)) / (i1+i2)`

## How It Works
1. Reads weight and quantity for two items.
2. Computes the weighted average using the formula above.
3. Prints the result.

## Sample Run
```
Weight - Item1 : 15
No. of item1 : 5
Weight - Item2 : 25
No. of item2 : 4

Average Value = 19.444445
```

## Compile & Run
```bash
gcc main.c -o average_value
./average_value
```

## Notes / Possible Improvements
- The small difference between `19.444444` (expected) and `19.444445` (actual float output) is due to floating-point precision limits of `float` vs `double`. Using `double` instead of `float` would produce a result closer to the expected output.
