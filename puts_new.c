#include "main.h"
/**
 * puts_new - print new str
 *
 * @c: string
 * Return: no of bytes
 */
int puts_new(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			new_putchar(c[count]);
		}
	}
	return (count);
}
