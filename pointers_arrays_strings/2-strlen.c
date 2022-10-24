#include "main.h"

/**
 * _strlen - check the code
 * @s: string
 * Return:length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
