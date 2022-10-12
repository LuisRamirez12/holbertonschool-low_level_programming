#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
putchar ("\nLowercase characters : \n");
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar("%c ", ch);
}
return (0);
}
