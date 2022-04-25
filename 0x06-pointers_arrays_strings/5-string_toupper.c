#include "main.h"
/**
 * string_toupper - convert string to uppercase
 * @s: string to be converted
 * Return: s
 */
char *string_toupeer(char *)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32
		}
	}
	return (s);
}
