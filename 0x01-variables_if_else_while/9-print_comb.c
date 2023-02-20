#include <stdio.h>
/**
 * main - Entry Point
 * Description:' A program that prints digits from one to Ten'
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		{
			if (num < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
