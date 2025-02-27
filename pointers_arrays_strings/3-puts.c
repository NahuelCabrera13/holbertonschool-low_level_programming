#include"main.h"
#include<stdio.h>

/**
 * _puts - pepe
 * @str: pepe
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
