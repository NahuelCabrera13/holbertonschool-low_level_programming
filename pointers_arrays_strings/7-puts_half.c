#include"main.h"

/**
 * puts_half - pepe
 * @str: pepe2
 */
void puts_half(char *str)
{
	int i = 0;

	int longth = 0;

	while (str[longth] != '\0')
		longth++;

	for (i = 0; i > longth / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
