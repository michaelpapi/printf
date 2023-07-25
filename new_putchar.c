#include "main.h"
/**
 * new_putchar - prints a char
 * @c: char input
 * Return: 1
 */
int new_putchar(char c)
{
	return (write(1, &c, 1));
}
