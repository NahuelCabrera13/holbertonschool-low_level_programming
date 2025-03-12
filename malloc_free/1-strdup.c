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
char *_strdup(char *str);
{
	int i, legth;

	char *str2;

	if(str == NULL)
	{
		return(NULL);
	}

	while (str[legth] != '\0')
		legth++;


	str2 = (char *)malloc((legth + 1) * sizeof(char));
	
	if (str2 == NULL)
		return(NULL);

	for (i = 0; i < legth; i++)
	{
		str2[i] = str[i]
	}
	return (str2);
}
