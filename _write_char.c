#include "main.h"

/**
 * _write_char - writes the char c to stdout
 * @c: The character to print
 * Return: On success 1
 * On errr , -1 is returned, and errno is set appropriately
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
