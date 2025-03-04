#include "main.h"

/**
 * _memcpy - hace una copia de un punto de memoria
 *@dest: pepe
 *@src: pepe
 *@n: pepito
 *Return: retorna dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
