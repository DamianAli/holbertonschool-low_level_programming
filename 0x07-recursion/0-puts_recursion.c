#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: A string.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
