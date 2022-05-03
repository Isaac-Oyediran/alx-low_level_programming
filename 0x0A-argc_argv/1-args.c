#include <stdio.h>
#include <stdlib>

/**
 * main - Entry point
 * @argc: Counts the number of parameters that goes into main
 * @argv: Pointer to array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
