#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'prints numbers of base 16 in lowercase'
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	char n;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	n = i + '0';
	}
	else
	{
	n = i - 10 + 'a';
	}
	putchar(n);
	}
	putchar('\n');
	return (0);
}	
