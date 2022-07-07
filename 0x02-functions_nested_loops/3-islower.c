#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * int _islower - Finds lower case character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (islower(c) == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}

	return (0);
}
