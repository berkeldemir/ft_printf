/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:54:32 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/24 19:30:52 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	va_start(args, str);
	int count;
	
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_check_parameter(*str, args);
		}
		else
			count += ft_print_c(va_arg(args, char));
		str++;
	}
	va_end(args);
}
