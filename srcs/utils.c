#include "../includes/ft_printf.h"


void print_u_int(va_list arg, int *arg_len)
{
	unsigned int n;

	n = va_arg(arg, unsigned int);
	ft_putnbr_base(n, "10", arg_len);
}

void print_int(va_list arg, int *arg_len)
{
	int n;

	n = va_arg(arg, int);
	ft_putnbr_base(n, "10", arg_len);
}

void print_putchar(va_list arg, int *arg_len)
{
	char c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

void print_base(va_list arg, int *arg_len, const char *str)
{
	unsigned long n;

	n = va_arg(arg, unsigned long);
	if ((char)str == 'X')
		ft_putnbr_base(n, "0123456789ABCDEF", arg_len);
	else if ((char)str == 'x')
		ft_putnbr_base(n, "0123456789abcdef", arg_len);
}