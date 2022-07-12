#include "stdarg.h"
#include "main.h"

/* i - is the number that we will enter/type or other wise a vlaue.*/
/*n - is the count, it counts the number of characters are the printed data.*/



/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	int n = 0, i = 0;

	va_list ap;

	va_start(ap, format);

	for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
	{

		if (format[i] != '%')
		{
			n += _putchar(format[i]);
			i++;
		}
		else if (format[i + 1] == '%' && format[i + 1] != ' ')
		{
		switch (format[i + 1])
		{
			case 's':
			n += print_str(va_arg(ap, char *));
			break;
			case 'c':
			n += _putchar(va_arg(ap, int));
			break;
			case '%':
			n += _putchar('%');
			break;
			default:
			break;
		}
		}
	}
	va_end(ap);

	return (n);
}
