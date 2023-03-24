#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes The character c to stdout
 * @c: The character to print
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(c)
{
	return(write(1, &c, 1));
}
