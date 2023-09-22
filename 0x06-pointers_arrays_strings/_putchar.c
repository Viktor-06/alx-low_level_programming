#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is the returned, anderrno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
