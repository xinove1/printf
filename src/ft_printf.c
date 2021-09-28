#include "ft_printf.h"

int	read_conversion(const char *str, int i, va_list args);

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	args;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += read_conversion(str, i + 1, args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	read_conversion(const char *str, int i, va_list args)
{
	int	count;

	count = 0;
	//printf("inside str[i]: %c   ", str[i]);
	if (str[i] == 'c')
		count = print_c(args);
	else if (str[i] == 's')
		count = print_string(args);
	else if (str[i] == 'p')
		count = 0;
	else if (str[i] == 'd')
		count = 0;
	else if (str[i] == 'i')
		count = 0;
	else if (str[i] == 'u')
		count = 0;
	else if (str[i] == 'x')
		count = 0;
	else if (str[i] == 'X')
		count = 0;
	else if (str[i] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	return (count);
}