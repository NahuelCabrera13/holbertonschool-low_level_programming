#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - funcion pepe
 * @argc: pepe 2
 * @argv: pepe supreo
 * Return: es pepe la salida
 *
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

		printf("%d\n", mul);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
