#include <stdio.h>
/**
 * main -numbers of base 16 with lowercase
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int m;
	int n;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

