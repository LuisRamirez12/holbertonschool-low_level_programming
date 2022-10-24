#include "main.h"
#include <stdio.h>

/**
 * print_rev - it prints a string in reverse
 * @s:pointer to string
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
