#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints al natural numbers from n to 98.
 *
 * @n: limit
 *
 * Return: 0
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

													if (n == 98)
			{
				break;
													}
			else
			{
				_putchar(',');

				_putchar(' ');

				n++;
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n == 98)
			{
				break;
			}
			else
			{
				_putchar(',');

				_putchar(' ');

				n--;
			}
		}
		_putchar('\n');
	}
}
