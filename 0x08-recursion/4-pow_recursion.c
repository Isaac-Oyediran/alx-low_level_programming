#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: number
 * @y: power
 * Return: On Success 1
 * On error, -1 is returned and the error is fixed appropriately
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
