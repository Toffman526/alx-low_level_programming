#include "main.h"

/**
 * times_table - prints the 9 times table, starting from 0
 *
 * Return:  (success)
 */
void times_table(void)
{
	int i = 0, n;

	while (i <= 9)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((i * n) >= 10)
			{
				_putchar((i * n) / 10 + '0');
				_putchar((i * n) % 10 + '0');
			}
			else if ((i * n) < 10)
			{
				_putchar((i * n) + '0');
			}
			if ((i * (n + 1)) >= 10 && n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if ((i * (n + 1)) <= 9 && n != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
