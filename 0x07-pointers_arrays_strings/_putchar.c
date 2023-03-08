#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * author: julienbarbier42
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
