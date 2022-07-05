#include "putchar.h"

/**
 * 4_isalpha - check the code for Holberton School students.
 * 
 * @c: is c an integer argument
 *
 * Return: Always 0
 */

int 4_isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	
	return (0);

}
