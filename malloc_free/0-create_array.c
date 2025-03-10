#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array - esto es pepe
 * @size: pepe maximo
 * @c: adivinaste, otra vez pepe
 * Return: ni idea
 */
char *create_array(unsigned int size, char c)
{
	char *pe;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	pe = malloc(size * sizeof(*pe));

	if (pe == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		pe[i] = c;

	return (pe);
}
