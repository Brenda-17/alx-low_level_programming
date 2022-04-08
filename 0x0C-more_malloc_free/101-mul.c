#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned long mul;

	if (argc != 3)
	{ print("Error\n");
		exit(98); }
	if ((strlen(argv[1]) != strlen(itoa(atoi(argv[1])))) ||(strlen(argv[2) != strlen(itoa(atoi(argv[2])))) ) 
	{
		//it is not an integer
		print("Error\n");
		exit(98);
	}

	//its an integer
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
