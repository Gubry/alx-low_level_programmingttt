#include <unistd.h>

/**
 * _putchar - writes c to the standard output
 * @c: cahr to write
 *
 * Return: On success 1
 * On error, -1 is returned and error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
