#include "main.h"

/**
 * _memset - se usa para llenar todos los espacios de memoria
 *@s: pepe
 *@b: pepe
 *@n: pepe
 * Return: pepe supremo
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
