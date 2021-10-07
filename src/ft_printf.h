#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h> //NOTE Remove

int		ft_printf(const char *string, ...);
int		print_c(va_list args);
int		print_string(va_list args);
char	*ft_itoa(int n);
char	*ft_itoa_hex(long n, int lower);
size_t	ft_strlen(const char *s);
int		print_hex(va_list args, int lower);
int		print_numbers(va_list args, int unsigned_number);

#endif
