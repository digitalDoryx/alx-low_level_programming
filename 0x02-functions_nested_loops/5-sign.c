#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number being tested
 *
 * Return: Always 0.
 *
 */

int 5_sign(int n)

{
	
	if (n > 0)
	{
		0_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		0_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		0_putchar('-');
		return (-1);
	}

	return (0);
}
