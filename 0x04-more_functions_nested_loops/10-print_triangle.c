#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
