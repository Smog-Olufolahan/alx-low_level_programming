#include "holberton.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;
	char p[] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}

