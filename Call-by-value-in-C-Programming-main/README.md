# Call by Value Practice Questions (C) — Individual Files

20 separate C programs, each demonstrating the **call by value** parameter-passing mechanism in C — showing that modifying a parameter inside a function never changes the original variable in the caller (`main()`).

## Concept

In C, arguments are passed as **copies**. Changes made to a parameter inside a function are local to that function and do not affect the caller's variable.

```c
void increaseByTen(int n) {
    n = n + 10;   // only changes the local copy
}

int main() {
    int x = 5;
    increaseByTen(x);
    // x is still 5 here
}
```

## File structure

```
call-by-value-individual/
├── q1_swap_two_integers.c
├── q2_square_a_number.c
├── q3_increase_value_by_10.c
├── q4_sum_of_two_numbers.c
├── q5_area_of_rectangle.c
├── q6_check_even_number.c
├── q7_set_number_to_zero.c
├── q8_compound_interest.c
├── q9_factorial.c
├── q10_celsius_to_fahrenheit.c
├── q11_score_to_grade.c
├── q12_double_value.c
├── q13_greater_of_two_numbers.c
├── q14_grayscale_average_rgb.c
├── q15_leap_year_check.c
├── q16_calculate_bmi.c
├── q17_voting_eligibility.c
├── q18_round_a_float.c
├── q19_lowercase_to_uppercase.c
├── q20_simple_interest.c
├── .gitignore
└── README.md
```

Each file is self-contained with its own `main()`, so it can be compiled and run independently.

## Problems covered

| File | Problem |
|------|---------|
| `q1_swap_two_integers.c` | Swap two integers |
| `q2_square_a_number.c` | Square a number |
| `q3_increase_value_by_10.c` | Increase a value by 10 |
| `q4_sum_of_two_numbers.c` | Sum of two numbers |
| `q5_area_of_rectangle.c` | Area of a rectangle |
| `q6_check_even_number.c` | Check if a number is even |
| `q7_set_number_to_zero.c` | Set a number to zero |
| `q8_compound_interest.c` | Compound interest |
| `q9_factorial.c` | Factorial of a number |
| `q10_celsius_to_fahrenheit.c` | Celsius to Fahrenheit |
| `q11_score_to_grade.c` | Score to grade |
| `q12_double_value.c` | Double the value |
| `q13_greater_of_two_numbers.c` | Greater of two numbers |
| `q14_grayscale_average_rgb.c` | Grayscale average of RGB |
| `q15_leap_year_check.c` | Leap year check |
| `q16_calculate_bmi.c` | Calculate BMI |
| `q17_voting_eligibility.c` | Voting eligibility |
| `q18_round_a_float.c` | Round a float |
| `q19_lowercase_to_uppercase.c` | Lowercase to uppercase |
| `q20_simple_interest.c` | Simple interest |

## How to compile and run

Compile a single file:

```bash
gcc q1_swap_two_integers.c -o q1 -lm
./q1
```

Compile and run all of them at once:

```bash
for f in q*.c; do
  gcc "$f" -o "${f%.c}" -lm && ./"${f%.c}"
  echo
done
```

`-lm` links the math library (needed for `pow()` in `q8_compound_interest.c`).

## Sample output (q1)

```
Before call: a = 5, b = 10
Inside swapByValue: a = 10, b = 5
After call:  a = 5, b = 10 (unchanged)
```

This shows that even though the values are swapped *inside* the function, `main()`'s original variables remain untouched.

## Possible improvements

- Add a parallel "call by reference" version of each problem (using pointers) for direct comparison
- Take input via `scanf()` for interactive practice
- Add a `Makefile` to build all files with one command

## License

MIT — free to use and modify.
