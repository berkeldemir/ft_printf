/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:05:15 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/27 20:43:52 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_print_c(char c);
int	ft_base(unsigned long num, char *ref);
int	ft_print_s(char *s);
int	ft_print_p(void *p);
int	ft_print_i_d(int i);
int	ft_print_u(unsigned int n);
int	ft_print_x(int num, const char ch);

int	ft_check_parameter(const char c, va_list args);
int	ft_printf(const char *str, ...);

#endif