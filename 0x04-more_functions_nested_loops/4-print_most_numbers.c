#include "main.h"
/**
 * print_most_numbers - a function that prints numbers from 0-9
 *
 * Decription - break the loop if i == 2 or i == 4
 *
 * Return: 0-9, excluding 2 and 4, following by new line
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		if ((y == 2) || (y == 4))
			continue;
		else
			_putchar(y + '0');
	}
	_putchar('\n');
}
