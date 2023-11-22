#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - my fonction printf
 * @format: format is a string of character with "%" in specifier
 * @...: argument for my "%" specifier
 * Return: number of charaters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count_characters = 0;
	const char *ptr_char_format;
	print_function_t specifiers[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	va_start(args, format);

	for (ptr_char_format = format; *ptr_char_format != '\0'; ptr_char_format++)
	{
		if (*ptr_char_format == '%')
		{
			int index = 0;

			while (specifiers[index].specifier != '\0')
			{
				if (specifiers[index].specifier == *(ptr_char_format + 1))
				{
					count_characters += specifiers[index].f(args);
					ptr_char_format++;
					break;
				}
				index++;
			}
		}
		else
		{
			count_characters += _putchar(*ptr_char_format);
		}
	}
	va_end(args);

	return (count_characters);

}
