# 4. Print 3 Characters and Their Reverse

## Problem Statement
Write a C program to print 3 characters and reverse of it.

**Test data:** The reverse of ABC is CBA

## Concept Covered
- `char` arrays / strings
- `fgets()` for reading input
- `strlen()` from `string.h`
- Looping backwards through a string

## How It Works
1. Reads a word/string into a character array using `fgets`.
2. Prints the original string.
3. Loops from the last index to the first, printing each character to reverse it.

## Sample Run
```
Enter the word : ABC
The characters are : 
CBA
```

## Compile & Run
```bash
gcc main.c -o reverse_string
./reverse_string
```

## Known Issue
- `printf("The characters are : ", arr);` — the second argument `arr` is ignored because there's no `%s` format specifier in the string. Fix by changing it to:
  ```c
  printf("The characters are : %s", arr);
  ```
- `fgets` includes the trailing newline (`\n`) character in `arr`, which is why the reversed output prints on a new line first. To avoid this, strip the newline before reversing:
  ```c
  arr[strcspn(arr, "\n")] = '\0';
  ```

## Notes / Possible Improvements
- Add the newline-stripping fix above to match the expected clean output format (`ABC` then `CBA`).
