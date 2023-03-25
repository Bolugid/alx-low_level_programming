#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (c = m + 1; c <= 9; c++)
			{
			if ((m != n) != c)
				{
					putchar(n);
					putchar(m);
					putchar(c);
					if (n == 7 && m == 80)
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
