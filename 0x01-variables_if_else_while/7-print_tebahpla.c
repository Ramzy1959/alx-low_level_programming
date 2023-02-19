#include <stdlib.h>
#include <time.h>
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
	putchar("%c", b);
	}
	putchar('\n');
	return (0);
