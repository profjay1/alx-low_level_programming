#include "main.h"

/**
 * int _islower - Finds lower case character
 *
 * Return 1 if c is lower case otherwise return 0
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')

		return (1);
	else
		return (0);
}
