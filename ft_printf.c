/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:54:32 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 04:48:30 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		flag;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			flag = ft_check_flag(*str);
			if (flag != 0)
				str++;
			count += ft_check_parameter(*str, args, flag);
		}
		else
			count += ft_print_c(*str);
		str++;
	}
	va_end(args);
	if (count < 0)
		return (-1);
	return (count);
}
