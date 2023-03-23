#include <stdio.h>
/**
 * main - print the first 52 fibonacci number
 * Return: always o
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 59)
	{
		if (i == 0)
			printf("%d", j);
		else if (i == 1)
			printf(", %d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %d", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
