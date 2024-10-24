/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_parameter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:24:46 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/24 19:29:26 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_parameter(char c, va_list args)
{
	if (c == '%')
		return (ft_print_c('%'));
	if (c == 'i' || c == 'd')
		return (ft_print_i_d(va_arg(args, int)));
	if (c == 'p')
		return (ft_print_i_d(va_arg(args, void *)));
}