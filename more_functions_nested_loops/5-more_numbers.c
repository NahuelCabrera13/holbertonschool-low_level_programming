#include"main.h"

/**
 *more_numbers - hace algo
 */
void more_numbers(void)
{
	char a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
				_putchar(b / 10 + '0');
			_putchar (b % 10 + '0');
		}
		_putchar('\n');
	}
}
