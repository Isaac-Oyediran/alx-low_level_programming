#include <stdio.h>

/**
 * main - Prints the name of a file that it was compiled from
 * Return: Success (0)
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
