#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: number of times that table will be printed
 *
 * Return: 0
 */


void print_times_table(int n)
{

	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');

				_putchar(' ');

				c = a * b;

				if (c <= 9)
				{
					_putchar(' ');

					_putchar(' ');

				}
				else if (c <= 99)
				{
					_putchar(' ');
				}
				printf("%d", c);
			}
			putchar('\n');
		}
	}

}
