#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints Zero to Ten with putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
	putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
