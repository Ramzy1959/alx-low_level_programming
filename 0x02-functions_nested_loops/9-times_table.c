#include "main.h"
/**
 * times_table - time table being printed in table format
 * Return: Always success
 */
void times_table(void)
{
	int i, j;
    for (i = 0; i <= 10; i++) {
        for (j = '0'; j <= '9'; j++) {
            if (j == 'x') {
                _putchar(j);
                _putchar(' ');
            } else if (j == '=') {
                _putchar(' ');
                _putchar(j);
                _putchar(' ');
            } else {
                int digit = j - '0';
                int result = i * 9 + digit;
                _putchar(' ');
                _putchar(digit + '0');
                _putchar(' ');
                _putchar('=');
                _putchar(' ');
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
                _putchar(',');
            }
        }
        _putchar('\n');
    }
}
