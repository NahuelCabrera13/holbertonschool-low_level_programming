#include"main.h"

/**
 * rev_string - pepe
 * @s: pepe
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

