#include "main.h"
/**
 * print_square - prints square stuff
 *
 * @size: integer to set square size
 */
int main(void)
{
	void print_square(int size)
	{
		size = 10;
		int i;
		int j;

		if (size <= 0)
		{
			putchar("\n");
		} else
		{
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					_putchar('#');
				};
			};
			_putchar('\n');
		};
	};
}

