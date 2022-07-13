#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');

			_putchar(' ');

			c = a * b;

			if (c <= 9)
			{
				_putchar(' ');
			}

			printf("%d", c);
		}

		_putchar('\n');
	}
}
