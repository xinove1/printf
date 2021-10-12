/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthomas- <nthomas-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:32:26 by nthomas-          #+#    #+#             */
/*   Updated: 2021/10/12 16:48:37 by nthomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
int		print_c(va_list args);
int		print_string(va_list args);
char	*ft_itoa(int n);
char	*ft_itoa_hex(unsigned long n, int lower);
char	*ft_itoa_unsigned(unsigned int n);
size_t	ft_strlen(const char *s);
int		print_hex(va_list args, int lower);
int		print_numbers(va_list args, int unsigned_number);

#endif
