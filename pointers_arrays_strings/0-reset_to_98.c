#include "main.h"

/**
 * reset_to_98 - toma un puntero y restablece sus valores a 98
 * @n: puntero a procesar
 * Devolución: nula
 */
void reset_to_98(int *n)
{
	*n= 98;
}

/**
 * main - parameters are passeb by value
 *
 * Return: Always 0.
 */
int main (void)
{
	int n;
	n = 98;
	reset_to_98(*n);
	return (0);
}
