#include "main.h"
/**
 *print_numbers - Entry point with _putchar function
 *Description: prints the numbers, from 0 to 9
 *Return: always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
	
}
