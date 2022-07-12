#include "main.h"
/**
 * print_string - print  string.
 * @string: number of strings.
 * Return: the length of the string.
 */



int print_string(char *string)
{
	int n = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		n += _putchar(string[i]);
	}
	return (n);
}
