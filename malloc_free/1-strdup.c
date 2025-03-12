#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
 * _strdup - esto es pepe
 * @str: pepe
 * Return: ni idea
 */
char *_strdup(char *str)
{
	int i, legth;

	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[legth] != '\0')
		legth++;


	str2 = (char *)malloc((legth + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < legth; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
