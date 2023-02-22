#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase charcter or 0 for anything else
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
