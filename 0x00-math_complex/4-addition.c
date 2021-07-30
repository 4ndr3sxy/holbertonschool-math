#include "holberton.h"

/**
 * addition - addition of struct complex's in other struct complex
 * @c1: first struct complex
 * @c2: second struct complex
 * @c3: third struct complex, where additional struct c1 and c2
 * Return: Withour return.
 */
void addition(complex c1, complex c2, complex *c3)
{
	(*c3).im = c1.im + c2.im;
	(*c3).re = c1.re + c2.re;
}
