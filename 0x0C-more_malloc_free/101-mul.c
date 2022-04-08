#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	
		if (argc != 3)
		{ printf("Error\n");
		exit(98); }
		
	if ((strlen(argv[1]) != strlen(itoa(atoi(argv[1])))) ||(strlen(argv[2) != strlen(itoa(atoi(argv[2])))) ) {
   		//it is not an integer
		 printf("Error\n");
		 exit(98); 
	}

	//its an integer
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
		
	return (0);
}
