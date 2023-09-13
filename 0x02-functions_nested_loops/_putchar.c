#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: this is the character to print
 *
 * Return: 1 when it's success
 * error: -1 when it's error and sends errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
