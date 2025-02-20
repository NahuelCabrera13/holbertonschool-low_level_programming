#include "main.h"
#include <stdio.h>

/**
 * times_table - reconoce los caracteres en minuscula
 * Return: 1 es si todo esta bien, 0 si no,
 */
void times_table(void)
{
	int m, n, pepe;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			pepe = m * n;

		}
		if (pepe <= 9)
		{
			_putchar(pepe + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		} else
		{
			_putchar((pepe / 10) + '0');
			_putchar((pepe % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}

		if (n != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
