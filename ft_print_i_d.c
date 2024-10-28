/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:19:11 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 05:52:42 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i_d(int n, int flag)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
		return (ft_print_s("-2147483648"));
	if (flag == 3)
		count += ft_print_c('+');
	else if (flag == 2)
		count += ft_print_c(' ');
	if (n < 0)
	{
		count += ft_print_c('-');
		n *= -1;
	}
	if (n < 10)
		count += ft_print_c(n + '0');
	else
	{
		count += ft_print_i_d(n / 10, 0);
		count += ft_print_c(n % 10 + '0');
	}
	return (count);
}
