#include "main.h"

/**
 * puts2 - pepe
 * @str: pepe
 */
void puts2(char *str)
{
	int i = 0;

	int length = 0;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
