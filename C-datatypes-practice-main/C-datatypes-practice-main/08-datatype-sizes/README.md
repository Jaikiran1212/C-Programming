# 8. Print Data Types and Their Byte Sizes

## Problem Statement
Write a C program to print the data types and number of bytes each one takes.

## Concept Covered
- `sizeof()` operator
- Standard C data types: `char`, `int`, `float`, `double`, `short int`, `long int`, `unsigned long int`, `long long int`
- `%zu` format specifier for printing `size_t` values

## How It Works
The program uses the `sizeof()` operator on each fundamental data type and prints the result using `%zu` (the correct specifier for `size_t`, the type returned by `sizeof`).

## Sample Run
```
char: 1 byte(s)
int: 4 byte(s)
float: 4 byte(s)
double: 8 byte(s)
short int: 2 byte(s)
long int: 8 byte(s)
unsigned long int: 8 byte(s)
long long int: 8 byte(s)
```
> Note: exact sizes for `long int`/`unsigned long int` may vary between platforms (e.g., 4 bytes on 32-bit Windows systems, 8 bytes on most 64-bit Linux/Mac systems).

## Compile & Run
```bash
gcc main.c -o datatype_sizes
./datatype_sizes
```

## Notes / Possible Improvements
- This is a good reference program for understanding platform-dependent sizes of C data types.
