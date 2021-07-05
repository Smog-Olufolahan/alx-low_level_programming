#include "holberton.h"

/**
 * _memset - fill a block of memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to set
 * @n: number of bytes to be changed
 *
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

