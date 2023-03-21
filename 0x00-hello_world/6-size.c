#include <stdio.h>
/**
 * main - A preogram that print the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
