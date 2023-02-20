#include <stdio.h>
/**
 * main - Entry Point
 * Description: ' program different possible combination of digits'
 * Return: Always 0 (success)
 */
int main(void)
{
	int r = 0;

	while (r < 10)
	{
		int c = r + 1;

		while (c < 10)
		{
			putchar(r + '0');
			putchar(c + '0');

			if (r != 8 || c != 9)
			{
				putchar(',');
				putchar(',');
			}
			c++;
		}
		r++;
	}
	putchar('\n');
	return (0);
}
