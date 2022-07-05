#include "putchar.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 * Yes yes yes
 */

void print_alphabet(void)

{
	char alp = 'a';
	
	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	
	}
	_putchar ('\n');

}
