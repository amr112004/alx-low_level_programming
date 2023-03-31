#include "main.h"

/**
 * _strnact - a function that concatenates tow strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of byte from 8src
 *
 * Return: 3dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null torminate dest*/
	dest[c + i] = '\0';
	
	return (dest);
}
