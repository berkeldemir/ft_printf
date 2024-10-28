/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:20:40 by beldemir          #+#    #+#             */
/*   Updated: 2024/10/28 07:56:00 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_print_i_d(n / 10, 0);
		count += ft_print_i_d(n % 10, 0);
	}
	else if (n <= 9)
		count += ft_print_c(n + '0');
	if (count < 0)
		return (-1);
	return (count);
}
