# _printf

## Description
This project implements a simplified version of the `printf` function in C called `_printf`. The function takes in a format string with specified placeholders and prints formatted output to the standard output.

## Compilation
To compile the project, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Requierements
The project was developed and tested in an environment using:
Ubuntu 20
GCC compiler
Git

## Usage
Usage example
Here is an example demonstrating the usage of _printf:

#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Hey!! If you are %s, it's because we are %d good students.\n", "reading this properly", 2);
    return (0);
    }

Result: `Hey!! If you are reading this properly, it's because we are 2 good students.`


## MAN Page
1.To create the man page man_3_printf, execute the following commands:
`touch man_3_printf`
2.Open the file man_3_printf with a text editor and add the content for the man page, detailing the usage and parameters of _printf.
3.Save the file with the appropriate content.
4.After creating the man_3_printf file, make it executable:
`chmod +x man_3_printf`
5.To view the man page, use the `man` command:
`./man_3_printf`
This will display the manual page you created for `printf`.

##Testing and Memory Leak Check
To test the _printf function, you can create test cases and compile them alongside the project files. Additionally, you can use tools like valgrind to check for memory leaks.

Example using valgrind:
`valgrind ./printf`

##Flowchart

![Flowchart](https://github.com/CappieGold/holbertonschool-printf/raw/master/image.png)

##Authors
This project was created and maintained by [Carpentier Jeremy](https://github.com/CappieGold) and [Huybrechts Jonathan](https://github.com/Miniknacky).