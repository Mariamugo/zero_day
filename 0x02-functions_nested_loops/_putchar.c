#include <stdio.h>
/**
 * _putchar - function prints character
 *
 * @c: char argumetnt taken by function
 *
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
