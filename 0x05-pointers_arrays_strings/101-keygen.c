#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 */

int main(void)
{
	int num;

	strand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}

