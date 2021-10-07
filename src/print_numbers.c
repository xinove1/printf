#include "ft_printf.h"

int	print_hex(va_list args, int lower)
{
	int		count;
	int		n;
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
