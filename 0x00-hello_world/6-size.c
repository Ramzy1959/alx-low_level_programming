#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
char r;
int b;
long int c;
long long int h;
float x;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(x));
return (0);
}
