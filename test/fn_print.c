#include "main.h"

/**
* _print_c - print a char
* @list: arg from list
* Return: counter
*/
int _print_c(va_list list)
{
	int cn = 0;
	char arg = va_arg(list, int);

	_putchar(arg);
	cn++;

	return (cn);
}
/**
* _print_s - print a string
* @list: arg from list
* Return: counter
*/
int _print_s(va_list list)
{
	int i, cn = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		cn++;
	}

	return (cn);
}
/**
* _print_mod - print a module char
* @list: arg from list
* Return: counter
*/
int _print_mod(va_list list)
{
	int cn = 0;
	(void) list;

	_putchar('%');
	cn++;

	return (cn);
}
/**
* _print_i - prints decimals and integers
* @list: arg from list
* Return: counter
*/
int _print_i(va_list list)
{
	int j = i, cn = 0;
	int i = va_arg(list, int);

	if (i == NULL)
		return (-1);

	while (i < 0)
	{
		i /= 10;
		cn++;
	}

	

	return (cn);
}
