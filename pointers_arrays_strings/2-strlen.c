#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s);
int main(void)
{
		char *str;
			int len;

				str = "Holberton!";
					len = _strlen(str);
						printf("%d\n", len);
							return (0);
}
