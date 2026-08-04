# Question Paper 1

## 1. `longest-palindromic-substring.c`

Finds the longest palindromic substring in a given string using a brute-force
expand/check approach over all substrings.

> ⚠️ **Incomplete file**: this file only contains the `Medium()` function. It
> is missing `#include <stdio.h>` / `#include <string.h>` and a `main()` to
> call it. Add those before compiling, e.g.:
> ```c
> #include <stdio.h>
> #include <string.h>
>
> int main() {
>     char s[1000];
>     printf("Enter String : ");
>     scanf("%s", s);
>     Medium(s);
>     return 0;
> }
> ```

**Run:**
```bash
gcc longest-palindromic-substring.c -o longest-palindromic-substring
./longest-palindromic-substring
```

## 2. `remove-duplicates-sorted-array.c`

Removes duplicate elements in-place from a **sorted** integer array and
prints the count of unique elements along with the resulting array.

**Run:**
```bash
gcc remove-duplicates-sorted-array.c -o remove-duplicates-sorted-array
./remove-duplicates-sorted-array
```
