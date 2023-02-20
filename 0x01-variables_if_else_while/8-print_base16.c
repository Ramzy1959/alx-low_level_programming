#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Description: prints numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	
	int num = 'o';

	while (num < '16')
	{
		if (num < '10')
		putchar(num++);
	}
	else
	{
		putchar(num + '10');

	}  
	putchar('\n');
        return (0);
}	

	 








	
	
