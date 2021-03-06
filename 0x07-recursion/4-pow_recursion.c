#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x to the exponent y.
 * @x: A number.
 * @y: Exponent.
 *
 * Return: Value of x and y (int).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
