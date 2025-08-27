#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)  /* لو كان سالب نحوله لموجب */
		last = -last;

	_putchar(last + '0'); /* نحوله من رقم إلى كاركتر */
	return (last);
}
