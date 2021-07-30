#include "holberton.h"

/**
 * conjugate - change of simbol the number imaginary
 * @c: Struct type complex
 * Return: [COMPLEX] -  Struct type complex.
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
