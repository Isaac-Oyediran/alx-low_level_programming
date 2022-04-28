include "main.h"
/**
 * sqrt2 - makes it possible to evaluate from 1 to n
 * @a same number as n
 * @b: number that interates fron 1 to n
 * Return: On Success 1
 * On error, -1 is returned and the error is fixed appropriately
 */
int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: On Success 1
 * On error, -1 is returned and the error is fixed appropriately
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
