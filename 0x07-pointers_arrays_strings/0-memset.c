#include <string.h>
#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b
 *
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
