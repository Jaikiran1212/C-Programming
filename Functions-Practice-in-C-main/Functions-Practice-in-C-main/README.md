# Functions Practice Basics (C)

A collection of beginner-friendly C programs demonstrating **function usage** — covering value return, recursion, pointers, and loops. Each problem is implemented as its own function and called from `main()`.

## Problems covered

| # | Problem | Function |
|---|---------|----------|
| 1 | Print "Hello Amrita" | `printHello()` |
| 2 | Print the square of a number | `square(int n)` |
| 3 | Return the largest of two numbers | `largest(int a, int b)` |
| 4 | Return the factorial of a number (recursive) | `factorial(int n)` |
| 5 | Check whether a number is even or odd | `isEven(int n)` |
| 6 | Calculate the area of a circle | `areaOfCircle(double radius)` |
| 7 | Swap two numbers using pointers | `swap(int *a, int *b)` |
| 8 | Find the sum of digits | `sumOfDigits(int n)` |
| 9 | Reverse a number | `reverseNumber(int n)` |
| 10 | Check whether a number is prime | `isPrime(int n)` |

## File structure

```
functions_practice.c   # All 10 solutions + demo main()
README.md              # This file
```

## How to compile and run

```bash
gcc functions_practice.c -o functions_practice
./functions_practice
```

## Sample output

```
Hello Amrita
Square of 5: 25
Largest of 12 and 27: 27
Factorial of 6: 720
15 is Odd
Area of circle with radius 4.0: 50.27
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
Sum of digits of 12345: 15
Reverse of 6789: 9876
29 is Prime
```

## Notes

- Problem 7 (swap) is implemented using **pointers**, since swapping by value alone cannot modify the caller's variables in C.
- Problem 4 (factorial) uses **recursion**; an iterative version can easily replace it as an exercise.
- All inputs in `main()` are hardcoded for demo purposes — feel free to replace them with `scanf()` calls for interactive input.

## Possible improvements

- Take user input via `scanf()` instead of hardcoded values
- Add input validation (e.g., negative radius, negative factorial input)
- Split each function into separate `.c`/`.h` files for larger practice sets

## License

MIT — free to use and modify.
