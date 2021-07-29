#include "holberton.h"

/**
 * display_complex_number - print number real and imaginary
 * @c: Struct type complex, contains number real and imaginary
 * Return: Without return.
 */
void display_complex_number(complex c)
{
	printf("%g", c.re);
	if (c.im != 0)
	{
		if (c.im > 0)
		{
			if (abs(c.im) == 1)
				printf(" + i");
			else
				printf(" + %gi", c.im);
		}
		else
		{
			if (abs(c.im) == 1)
				printf(" - i");
			else
				printf(" - %gi", (c.im * -1));
		}
	}
	printf("\n");
}
