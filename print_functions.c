#include "main.h"
#include <stdlib.h>
/**
 * print_char - Print character using _putchar
 * @args: The character to print
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_str - Print string of characters
 * @args: Arguments from va_list to print
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int index = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		index += _putchar(*str);
		str++;
	}

	return (index);
}

/**
 * print_percent - Print a percentage sign
 * @args: No argument
 * Return: Number of characters printed for %
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
