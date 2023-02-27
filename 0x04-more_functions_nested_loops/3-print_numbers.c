#include "main.h"
#include <stdio.h>

/**
 *print_numbers - a function that prints the numbers, from 0 to 9
 *
 *Return: 0-9 followed by newline
 * Example result :
 * 0,1,2,3,4,5,6,7,8,9
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	putchar('\n');
}
