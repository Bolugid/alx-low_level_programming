#include "main.h"
#include <stdio.h>
/**
 *print_numbers - prints numbers from 0 to 9
 *_putchar: function
 *Return: void no return value
 */

void print_numbers(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
}
