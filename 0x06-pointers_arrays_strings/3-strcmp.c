#include "main.h"
#include <stdio.h>
/**
 *_strcmp - used to compare 2 strings
 *@s1: parameter 1
 *@s2: parameter 2
 *Return: void
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
