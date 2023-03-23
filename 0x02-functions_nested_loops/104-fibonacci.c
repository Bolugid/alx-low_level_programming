#include <stdio.h>
/**
 * main - print the first 98 fibonacci number,
 * Return: always 0
 */
int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long ff1, ff2, fff1, fff2;
	unsigned long h1, h2;
	
	for (c = 0; c < 92; c++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);
		f1 = f2;
		f2 = sum;
	}
		ff1 = f1 / 10000000000;
		ff2 = f2 / 10000000000;
		fff1 = f1 % 10000000000;
		fff2 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		h1 = ff1 + fff1;
		h2 = ff2 + fff2;
	if (ff1 + fff2 > 9999999999)
	{
		h1 += 1;
		h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
		if (c != 98)
		{
			printf(", ");
			ff1 = fff1;
			ff2 = fff2;
			fff1 = h1;
			fff2 = h2;
		}
	printf("\n");
	return (0);
}
