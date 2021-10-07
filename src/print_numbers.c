#include "ft_printf.h"

int	print_hex(va_list args, int lower)
{
	int		count;
	long	n;
	char	*str;

	count = 0;
	n = va_arg(args, long);
	if (lower == 2)
	{
		count = 2;
		write(1, "0x", 2);
	}
	if (lower)
		str = ft_itoa_hex(n, 1);
	else
		str = ft_itoa_hex(n, 0);
	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
		count++;
	}
	free(str);
	return (count);
}

int	print_numbers(va_list args, int unsigned_number)
{
	int		count;
	char	*str;

	count = 0;
	if (unsigned_number)
		str = ft_itoa(va_arg(args, unsigned int));
	else
		str = ft_itoa(va_arg(args, int));
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	free(str);
	return (count);
}
