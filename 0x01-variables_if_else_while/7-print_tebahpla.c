#include <stdio.h>
/**
 * main - Entry Point
 * Description: a program that prints lower case alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
