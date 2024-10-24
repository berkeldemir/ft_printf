#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(const char *str, ...);
char	*ft_base();
int ft_print_c(char c);
int ft_print_s(char *s);
int	ft_print_p(void *p);
int	ft_print_i_d(int i);
int ft_print_x(char *s);

#endif