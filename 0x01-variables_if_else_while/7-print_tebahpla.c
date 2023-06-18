#include <stdio.h>
/**
 * main -lowercase in a revers order
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
