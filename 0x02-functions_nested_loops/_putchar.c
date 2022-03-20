#include <unistd.h>
/**
 * _putchar-writes the char c to stdout
 * pc - The char to print
 *
 * Return: On Success 1
 * On error, -1 is returned and error is set approximately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
