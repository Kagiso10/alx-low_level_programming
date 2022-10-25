#include "main.h"

/**
 * rev_string - reverses a string
 *@s: input
 *Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[n];
		s[n] = rv;
	}
}
