#include "holberton.h"

/**
 * division - division of struct complex's in other struct complex
 * @c1: first struct complex
 * @c2: second struct complex
 * @c3: third struct complex, where is division struct c1 and c2
 * Return: Withour return.
 */
void division(complex c1, complex c2, complex *c3)
{
	double valueDivisible = (c2.re * c2.re) + ((c2.im * c2.im));
	(*c3).re = ((c1.re * c2.re) + ((c1.im * c2.im))) / valueDivisible;
	(*c3).im = (((c1.re * c2.im) * -1) + (c1.im * c2.re)) / valueDivisible;
}
