/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:19:11 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/24 19:30:35 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i_d(int num)
{
	int	count;
	
	count = 0;
	if (num == -2147483648)
	{
		count += ft_print_s("-2147483648");
		return (count);
	}
	if (num < 0)
	{
		ft_print_c('-');
		num *= -1;
	}
	if (num < 10)
	{
		count += ft_print_c(num % 10 + '0');
		count += ft_printf_i_d(num / 10);
	}
}
