#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print last digit if greater than five and another if less than six
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n / 10;
	if (ld < 5)
	{
		printf("Last digit of %d n is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of %d n is %d and is zero", n, ld);
	}
	else
	{
		printf("Last digit of %d n is %d and i less than 6", n, ld);
	}
	return (0);
}
