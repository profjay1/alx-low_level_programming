#include "main."

/**
 * Print alphabet - Print alphabet in lowere case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

	return (0);
