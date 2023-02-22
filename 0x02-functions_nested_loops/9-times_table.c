#include "main.h"
/**
 * times_table - time table being printed in table format
 * Return: Always success
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result =  i * j;

			if (result <= 9)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10) + '0';
				_putchar(result % 10) + '0';
			}
		}
		_putchar('\n');
	}
}
