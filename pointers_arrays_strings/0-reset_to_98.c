#include <stdio.h>

void reset_to_98(int *);

/**
 * main - check the code
 *
 * return: Always 0.
 */
int main(void)
{
	int n = 98;

	n = 402;
	printf("%d\n",n);
	reset_to_98(&n);
	printf("%d\n",n);
	return (0);
}
