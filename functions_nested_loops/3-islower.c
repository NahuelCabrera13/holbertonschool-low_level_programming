#include"main.h"

/**
 * _islower - reconoce los caracteres en minuscula
 * @c: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
