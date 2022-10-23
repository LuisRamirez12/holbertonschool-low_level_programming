#include "main.h"

/**
 * Main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int a_original = *a;
	int b_original = *b;

	*a = b_original;
	*b = a_original;
}
