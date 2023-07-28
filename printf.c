#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	/* Your implementation here */
	return printed_chars;
}

