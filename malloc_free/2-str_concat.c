#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
        int i, j, k, lengthS1, lengthS2, newStrLength;

        char *memory;

        if (s1 == NULL && s2 == NULL)
                return (strdup(""));

        if (s1 == NULL)
                return (strdup(s2));

        if (s2 == NULL)
                return (strdup(s1));

        for (i = 0; s1[i] != '\0'; i++)
                ;
        for (j = 0; s2[j] != '\0'; j++)
                ;

        lengthS1 = i;
        lengthS2 = j;
        newStrLength = lengthS1 + lengthS2 + 1;

        memory = malloc(newStrLength * sizeof(char));

        if (memory == NULL)
                return (NULL);

        i = 0, j = 0;

        for (k = 0; k < lengthS1; k++, i++)
        {
                memory[k] = s1[i];
        }

        for (; k < newStrLength; k++, j++)
        {
                memory[k] = s2[j];
        }

        memory[k] = '\0';
        return (memory);                                                                                                                                                                                         }
