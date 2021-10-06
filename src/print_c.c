#include "ft_printf.h"

int	print_c(va_list args)
{
	char	c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}
