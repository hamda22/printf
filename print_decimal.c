#include "main.h"

/**
 * print_dec - prints an integer
 * Return: n.
 * @s: value
 * n - is the count, it counts the number of characters are there.
*/

int print_dec(int s)
{
	int n = 0;

	if (s < 0)
	{
		n += _putchar('-');
		s *= -1;
	}
	else if (s / 10)
		n += print_dec(s / 10);
	n += _putchar(s % 10 + '0');

	return (n);
}
