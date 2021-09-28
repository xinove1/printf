#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h> //NOTE Remove

int	ft_printf(const char *string, ...);
int	print_c(va_list args);
int	print_string(va_list args);

#endif
