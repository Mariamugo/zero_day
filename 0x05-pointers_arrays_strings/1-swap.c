#include "main.h"

/**
 * swap_int - function swaps two intergers
 *
 * @a: argument of type int taken by function
 * @b: argument of type int taken by function
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)

{
	*a = (*b);
	*b = (*a);
}
