#include "main.h"
/**
 * print_times_table - print the times table of the input
 * @n: the value of the times table to be printed
 */
void print_times_table(int n)
{
	int b, m, p;

	if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = b * m;
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 14)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
				 _putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
