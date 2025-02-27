#include "main.h"
/**
 * print_triangle - pepe
 *
 * @size: ni idea
 */
void print_triangle(int size)
{
	int aux = size;
	int i, c;

	c = 1;
	while (aux > 0)
	{
		for (i = 0; i < size; i++)
			if (size - c <= i)
			{
				_putchar('#');
			} else
			{
				_putchar(' ');
			}
		if (aux != 1)
			_putchar('\n');
		c++;
		aux--;
	}
	_putchar('\n');
}
