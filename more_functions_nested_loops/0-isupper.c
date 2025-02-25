#include"main.h"

/**
 * _isupper - reconoce los caracteres en minuscula
 * @c: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
