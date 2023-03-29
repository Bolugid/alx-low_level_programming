#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *_putchar - prints numbers except 2 and 4 useing _putchar function
 *print_most_number - prints numbers
 *Return: void no return
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar (i + '0');
		}
	}
	_putchar ('\n');
}
