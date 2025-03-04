#include"main.h"
#include"stddef.h"

/**
 * _strchr - pepe supremo mega galaxia
 * @s: pepe
 * @c: pepe
 * Return: esto no tengo idea
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;

		else
			return (s);
	}

	if (*s == '\0')

		return (s);

	return (NULL);
}
