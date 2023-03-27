#include"main.h"

/**
 * print_numbers - print 0 - 9
 *	only using _putchar twice
 *
 * Return: Alwayes 0 (Succes)
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 43)
		num++;
	} while (num >= 0 && num <= 9);
	_putchar("\n");
}
