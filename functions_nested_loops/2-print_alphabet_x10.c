#include<stdio.h>

 /*
  * main - imprime el avecedario 10m veces
 */

int main(void)
{
	int i;
	char pepe;

	for (i = 1; i <= 10; i++)
	{
		for (pepe = 'a'; pepe <= 'z'; pepe++)
		{
			_putchar(pepe);
		}
		_putchar('\n');
	}
	return (0);
}
