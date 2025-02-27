#include"main.h"

/**
 *swap_int - es pepe
 *@a: puntero
 *@b: puntero
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *a;
	*b = aux;
}
