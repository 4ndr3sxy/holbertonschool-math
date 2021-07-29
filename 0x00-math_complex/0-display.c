#include "holberton.h"

/**
 * display_complex_number - print number real and imaginary
 * @c: Struct type complex, contains number real and imaginary
 * Return: Without return.
 */
void display_complex_number(complex c)
{
	printf("%.1f", c.re);
	if (c.im != 0)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
				printf(" + i");
			else
				printf(" + %.1fi", c.im);
		}
		else
		{
			if ((c.im * -1) == 1)
				printf(" - i");
			else
				printf(" - %.1fi", (c.im * -1));
		}
	}
	printf("\n");
}
