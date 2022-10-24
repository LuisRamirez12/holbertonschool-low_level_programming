#include "main.h"

/**
 * swap_int - check code
 * @a:indica lo que mostrara en b
 * @b:indica lo que mostrara en a
 */
void swap_int(int *a, int *b)
{
	int a_original = *a;
	int b_original = *b;

	*a = b_original;
	*b = a_original;
}
