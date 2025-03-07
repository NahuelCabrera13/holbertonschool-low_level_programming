#include"main.h"
#include<stdio.h>
/**
 * main - funcion pepe
 * @argc: pepe 2
 * @argv: pepe supreo
 * Return: es pepe la salida
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
