#include "main.h"
/**
 * print_triangle - pepe
 *
 * @size: ni idea
 */
void print_triangle(int size)
{
	int aux = size;
	int i;

	while (size > 0)
	{
		for (i = aux; i > 0; i--)
			_putchar ('#');
		if (size != 1)
			_putchar('\n');
		size--;
	}
	_putchar('\n');
}
