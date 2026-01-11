#include "main.h"

/**
 * print_number - recursively prints an unsigned integer
 * @n: unsigned integer to print
 * Return: count of digits printed
 */
int print_number(unsigned int n)
{
	int count = 0;
	char c;

	if (n / 10)
		count += print_number(n / 10);

	c = (n % 10) + '0';
	_putchar(c);
	count++;

	return (count);
}

/**
 * print_int - prints an integer (handles negative)
 * @args: va_list containing the integer
 * Return: total characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
		num = n;

	count += print_number(num);
	return (count);
}
