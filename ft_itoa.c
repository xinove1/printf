/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthomas- <nthomas-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:32:18 by nthomas-          #+#    #+#             */
/*   Updated: 2021/10/12 16:32:20 by nthomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static size_t	count_decimal(long n);
static void		populate_result(long n, int i, char *str);

char	*ft_itoa(int n)
{
	int		i;
	char	*result;
	long	ln;

	ln = n;
	n = 0;
	if (ln < 0)
	{
		ln = -ln;
		n = 1;
	}
	result = malloc(count_decimal(ln) + n + 1);
	if (!result)
		return (NULL);
	i = count_decimal(ln) + n - 1;
	result[i + 1] = '\0';
	if (n)
		result[0] = '-';
	if (!ln)
		result[i] = '0';
	populate_result(ln, i, result);
	return (result);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	int		i;
	char	*result;

	result = malloc(count_decimal(n) + 1);
	if (!result)
		return (NULL);
	i = count_decimal(n) - 1;
	result[i + 1] = '\0';
	if (!n)
		result[i] = '0';
	populate_result(n, i, result);
	return (result);
}

static void	populate_result(long n, int i, char *str)
{
	while (n && str)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

static size_t	count_decimal(long n)
{
	size_t	i;

	if (!n)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
