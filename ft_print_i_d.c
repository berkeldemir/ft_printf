/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:19:11 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/27 21:01:17 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i_d(int n)
{
	int	count;
	
	count = 0;
	if (n <= -2147483648)
	{
		count += ft_print_s("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count += ft_print_c('-');
		n *= -1;
	}
	if (n < 10)
		count += ft_print_c(n + '0');
	else
	{
		count += ft_print_i_d(n / 10);
		count += ft_print_c(n % 10 + '0');
	}
	return (count);
}
