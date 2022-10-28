#include "main.h"

/**
 *_strncmp - compare the twostrings
 *@s1: string 1
 *@s2: string 2
 *Return: s1 and s2 difference
 */
int  _strncmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
