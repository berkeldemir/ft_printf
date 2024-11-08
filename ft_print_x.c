/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beldemir <beldemir@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:24:49 by beldemir          #+#    #+#             */
/*   Updated: 2024/11/07 11:26:58 by beldemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int n, const char c, int flag)
{
	int	count;

	count = 0;
	if (flag == 1 && n != 0)
	{
		if (c == 'X')
			count += ft_print_s("0X");
		else if (c == 'x')
			count += ft_print_s("0x");
	}
	if (c == 'x')
		count += ft_base(n, HEXADOWN);
	else if (c == 'X')
		count += ft_base(n, HEXAUP);
	return (count);
}
