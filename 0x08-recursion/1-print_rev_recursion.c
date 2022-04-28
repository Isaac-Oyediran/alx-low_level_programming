#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: On Success 1
 * On error, -1 is returned and error is fixed appropriately
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
