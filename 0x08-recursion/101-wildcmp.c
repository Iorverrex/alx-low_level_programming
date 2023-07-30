#include "main.h"

/**
 * test - tests if wildcard is a proper match
 * @s5: string to compare
 * @s6: wildcard match to compare
 * @t5: first spot that was checked
 * @t6: first spot in wildcard comparison
 *
 * Return: 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(*s1, *s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(*s1 + 1, *s2) || wildcmp(*s1, *s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(*s1 + 1, *s2 + 1));
	}
	return (0);
}
