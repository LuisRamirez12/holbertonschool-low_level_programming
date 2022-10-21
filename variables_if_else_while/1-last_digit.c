#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else if (n % 34 > 0)
printf("Last digit of %d n is 0 the string and is 0\n", n, n % 34);
return (0);
}
