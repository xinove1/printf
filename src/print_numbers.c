#include "ft_printf.h"

int	print_hex(va_list args, int lower)
{
	int				count;
	unsigned long	n;
	char			*str;

	count = 0;
	n = va_arg(args, unsigned long);
	if ((long) n < 0)
	{
		write(1, "0xffffffffffffffff",18);
		return (18);
	}
	if (lower == 2)
	{
		count = 2;
		write(1, "0x", 2);
	}
	if (lower)
		str = ft_itoa_hex(n, 1);
	else
		str = ft_itoa_hex(n, 0);
	n = ft_strlen(str);
	write(1, str, n);
	free(str);
	return (count + n);
}

int	print_numbers(va_list args, int unsigned_number)
{
	int		count;
	char	*str;

	count = 0;
	if (unsigned_number)
		str = ft_itoa_unsigned(va_arg(args, unsigned int));
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
