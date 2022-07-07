#include "main.h"

/**
 * int _islower - Finds lower case character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c) == true)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
