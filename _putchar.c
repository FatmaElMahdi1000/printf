#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The intger to print, larger in size.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
