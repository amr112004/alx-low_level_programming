#include "main.h"

/**
 * _print_rev_recuesion - prints string in revrese
 * @s: pointer to string
 * *Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
