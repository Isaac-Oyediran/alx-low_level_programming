#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: input pointer to char type represents the pointer to the block of memory to fill
 * @b: input variable of char type represents the character to fill s
 * @n: unsigned int n variable the number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int)
{
	unsigned int i;
	i = 0;

	while (i < n)
	{
		s[i] = b; i++;
	}
	return (s);
}