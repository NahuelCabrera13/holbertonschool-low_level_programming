#include"main.h"

/**
 * puts_half - pepe
 * @str: pepe2
 */
void puts_half(char *str)
{
	int longth = 0, i;

	while (str[longth] != '\0')
		longth++;

	i = (longth + 1) / 2;

	for (; i < longth; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
