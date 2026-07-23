# 5. Area and Perimeter of a Circle (radius = 6 inches)

## Problem Statement
Write a C program to find the area and perimeter of a circle with a radius of 6 inches.

**Expected Output:**
```
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
```

## Concept Covered
- `float` arithmetic
- Using a constant value (π ≈ 3.14) in formulas
- Formulas: `Perimeter = 2 * π * r`, `Area = π * r^2`

## How It Works
1. Sets `radius = 6`.
2. Computes `area = 3.14 * radius * radius`.
3. Computes `perimeter = 2 * 3.14 * radius`.
4. Prints both values.

## Sample Run
```
Perimeter of the Circle = 37.680000
Area of the circle = 113.040001
```

## Compile & Run
```bash
gcc main.c -o circle
./circle
```

## Notes / Possible Improvements
- To match the expected output exactly, append the units ("inches" / "square inches") to the `printf` strings.
