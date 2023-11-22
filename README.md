# Project _printf

This project implements a custom version of the `printf` function in C language.

## Description

The file `_printf.c` contains the `_printf` function, which analyzes the format string and prints based on encountered specifiers. Supported specifiers include `%c`, `%s`, `%%`, `%d`, and `%i` to respectively print a character, a string, a percentage, a signed decimal integer, and a signed decimal integer (alias for `%d`).

The `print_functions.c` file contains associated functions to print different types, such as `print_char`, `print_str`, `print_percent`, and `print_int`.

The `main.h` file is the header file with function declarations and the `print_functions` structure.

The `_putchar.c` file contains the `_putchar` function to print a single character.

## Files

- `_printf.c`
- `print_functions.c`
- `main.h`
- `_putchar.c`

## Usage

Include the `main.h` header file in your program to use the `_printf` function. Then use `_printf` with format specifiers to print characters, strings, and integers.

```c
#include "main.h"

int main(void) {
    _printf("Hello, %s! Your favorite number is %d.\n", "Alice", 7);
    return (0);
}
