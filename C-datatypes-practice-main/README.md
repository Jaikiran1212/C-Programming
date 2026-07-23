# C Programming Practice — Various Datatypes

A collection of beginner-level C programs practicing fundamental data types (`int`, `float`, `double`, `char`, `short`, `long`, `unsigned long`), type casting, and arithmetic operations.

## 📂 Repository Structure

```
c-datatypes-practice/
├── README.md
├── 01-multiply-floats/
│   ├── main.c
│   └── README.md
├── 02-quotient-remainder/
│   ├── main.c
│   └── README.md
├── 03-swap-numbers/
│   ├── main.c
│   └── README.md
├── 04-string-reverse/
│   ├── main.c
│   └── README.md
├── 05-circle-area-perimeter/
│   ├── main.c
│   └── README.md
├── 06-multiple-variables/
│   ├── main.c
│   └── README.md
├── 07-average-value/
│   ├── main.c
│   └── README.md
└── 08-datatype-sizes/
    ├── main.c
    └── README.md
```

## 📋 Problem List

| # | Folder | Problem | Key Concept |
|---|--------|---------|--------------|
| 1 | [01-multiply-floats](01-multiply-floats) | Multiply two floating point numbers | `float`, `scanf` |
| 2 | [02-quotient-remainder](02-quotient-remainder) | Compute quotient and remainder (2 decimals) | type casting, division |
| 3 | [03-swap-numbers](03-swap-numbers) | Swap two numbers | temp variable swap |
| 4 | [04-string-reverse](04-string-reverse) | Print 3 characters and their reverse | char arrays, `strlen` |
| 5 | [05-circle-area-perimeter](05-circle-area-perimeter) | Area & perimeter of a circle (r = 6 in) | float arithmetic, formulas |
| 6 | [06-multiple-variables](06-multiple-variables) | Display multiple mixed-type variables | type promotion, format specifiers |
| 7 | [07-average-value](07-average-value) | Weighted average of two items | float arithmetic |
| 8 | [08-datatype-sizes](08-datatype-sizes) | Print data types and their byte sizes | `sizeof()` |

Each folder contains:
- `main.c` — the C source code
- `README.md` — problem statement, explanation, sample run, and how to compile/run

## 🛠️ How to Compile & Run Any Program

All programs use standard C and only require `gcc` (or any C compiler).

```bash
cd 01-multiply-floats
gcc main.c -o program
./program
```

On Windows (with MinGW):
```bash
gcc main.c -o program.exe
program.exe
```

## ✅ Requirements
- A C compiler such as [GCC](https://gcc.gnu.org/) or Clang
- (Optional) An IDE like VS Code, Code::Blocks, or online tools like [OnlineGDB](https://www.onlinegdb.com/)

## 📝 Notes
Some programs contain minor known issues (e.g., missing format specifiers, precision mismatches vs. expected output). These are documented in each program's individual `README.md` under a **"Known Issues"** section, along with suggested fixes — useful for learning to debug common beginner mistakes.

## 📄 License
Free to use for learning and educational purposes.
=======
