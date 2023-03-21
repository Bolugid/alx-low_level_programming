#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all possible combination'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;
	int c;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (c = m + 1; c <= 10; c++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((c % 10) + '0');

				if (n == 7 && m == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
