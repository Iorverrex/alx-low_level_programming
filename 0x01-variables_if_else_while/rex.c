#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 *
 */
int main(void)
{
	int i;
	char *j;
	for (i = 1; i <= 5; ++i)
	{
		for (j = "a"; j <= i; j++)
		{
			printf("%s", j);
		}
		printf("\n");
	}
	return 0;
}
