#include"main.h"

/**
 * _abs - function that computs the absolute
 * 	valu of an integer
 *
 * @n: takes in inetger type input for fuction
 *
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) *n;
	return (n);
}
