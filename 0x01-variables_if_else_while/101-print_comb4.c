#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (a == 7 && b == 8 && c == 9)
				 {
					 printf ("%d%d%d", a, b, c);
				 }
				else
				 {
					 printf("%d%d%d, ", a, b, c);
				 }
			}
		}
	}
	putchar('\n');

	return (0);
}
