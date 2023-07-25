#include "main.h"
/**
 * _printf - print to standard format text
 *
 * @format: format specifier
 * Return: no of bytes
 */
int _printf(const char *format, ...)
{
	unsigned int i, str_counts, count = 0;

	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			new_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			new_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str_counts = puts_new(va_arg(args, char*));
			i++;
			count += (str_counts - 1);
		}
		else if (format[i + 1] == '%')
		{
			new_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
