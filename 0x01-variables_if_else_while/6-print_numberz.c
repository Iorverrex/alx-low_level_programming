#include <stdio.h>
/**
 * main -print number using putchar
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
