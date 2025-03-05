#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that search a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i, f;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[i] == accept[f])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
