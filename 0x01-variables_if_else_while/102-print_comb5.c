#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b <= 9; b++)
		{
			for (c = b; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						printf("%d%d%d%d", a, b ,c , d);
					}
					else
					{
						printf("%d%d%d%d, ", a, b, c, d);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
