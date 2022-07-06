#include "main.h"

/**
 * print_last_digit - print_last_digit
 *
 * @a: number as int
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int s;

	s = a % 10;

	if (s < 0)
		s = -s;
	_putchar(s + '0');
	return (s);
}
