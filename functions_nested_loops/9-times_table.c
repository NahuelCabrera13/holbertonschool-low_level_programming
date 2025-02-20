#include "main.h"
/**
 * times_table - no  se que hace
 */
void times_table(void)
{
	int m, n, product;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			product = m * n;
			if (n > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10)
			{
				if (n > 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
