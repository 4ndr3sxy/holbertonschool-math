#include "holberton.h"

/**
 * argument - Get argument of number complex
 * @c: Struct type complex
 * Return: [DOUBLE] - argument.
 */
double argument(complex c)
{
	return (atan(c.im / c.re));
}
