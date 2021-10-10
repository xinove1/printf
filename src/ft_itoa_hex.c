#include "ft_printf.h"
static size_t	count_hex(long n);
static void		populate_result(long n, int i, char *str, int lower);

char	*ft_itoa_hex(unsigned long n, int lower)
{
	int				i;
	char			*result;
	unsigned long	ln;

	ln = n;
	result = malloc(count_hex(ln) + 1);
	if (!result)
		return (NULL);
	i = count_hex(ln) - 1;
	result[i + 1] = '\0';
	if (!ln)
		result[i] = '0';
	populate_result(ln, i, result, lower);
	return (result);
}

static void	populate_result(long n, int i, char *str, int lower)
{
	while (n && str)
	{
		if (n % 16 > 9)
		{
			if (lower)
				str[i] = (n % 16) + 87;
			else
				str[i] = (n % 16) + 55;
		}
		else
			str[i] = (n % 16) + '0';
		n /= 16;
		i--;
	}
}

static size_t	count_hex(long n)
{
	size_t	i;

	if (!n)
		return (1);
	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}
